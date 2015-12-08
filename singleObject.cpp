#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

cv::VideoCapture camera(0);
Mat src;
Mat mask;
Mat gausdst, hsv;
Mat drawing;
int main( int argc, char** argv )
{
  camera.set(CV_CAP_PROP_FRAME_WIDTH,640);
  camera.set(CV_CAP_PROP_FRAME_HEIGHT,480);
  camera.set(CV_CAP_PROP_FPS,20);
  int iLastX = -1; 
  int iLastY = -1;
  camera >> src;
  Mat imgLines = Mat::zeros( src.size(), CV_8UC3 );;
  int lineLength = 0;
  while(1){
    camera >> src;
    GaussianBlur( src, gausdst, cv::Size(9, 9), 2, 2 );
    cvtColor(gausdst,hsv,COLOR_BGR2HSV);
    inRange(hsv,Scalar(29,86,6),Scalar(64,255,255),mask);
    erode(mask, mask, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
    dilate( mask, mask, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
    Moments oMoments = moments(mask);
    double dM01 = oMoments.m01;
    double dM10 = oMoments.m10;
    double dArea = oMoments.m00;


    if (dArea > 10000){
     //calculate the position of the ball
      int posX = dM10 / dArea;
      int posY = dM01 / dArea;        
          
      if (iLastX >= 0 && iLastY >= 0 && posX >= 0 && posY >= 0){
        //Draw a red line from the previous point to the current point
        line(imgLines, Point(posX, posY), Point(iLastX, iLastY), Scalar(0,0,255), 2);
      }

      iLastX = posX;
      iLastY = posY;
    }
    lineLength+=1;
    if(lineLength > 100){
      
    }
    //  imshow("Thresholded Image", imgThresholded); //show the thresholded image

    src = src + imgLines;
    imshow("Original", src); //show the original image








    imshow("video", mask);
  }
  waitKey(0);
  return 0;

}