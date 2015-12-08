#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace cv;
using namespace std;

Mat canny_output,src, gausblur, mask,hsv,drawing;
int thresh = 200;
int max_thresh = 255;
RNG rng(12345);
int contouring();

/** @function main */
int main( int argc, char** argv )
{
  cv::VideoCapture camera(0);
  camera.set(CV_CAP_PROP_FRAME_WIDTH,640);
  camera.set(CV_CAP_PROP_FRAME_HEIGHT,480);
  camera.set(CV_CAP_PROP_FPS,20);
  while(1){
    /// Load source image and convert it to gray
    camera >> src;

    GaussianBlur( src, gausblur, cv::Size(9, 9), 2, 2 );
    cvtColor(gausblur,hsv,COLOR_BGR2HSV);
    inRange(hsv,Scalar(40,75,74),Scalar(90,255,255),mask);
    erode(mask, mask, getStructuringElement(MORPH_ELLIPSE, Size(10, 10)) );
    dilate( mask, mask, getStructuringElement(MORPH_ELLIPSE, Size(10, 10)) ); 

    /// Convert image to gray and blur it
    blur( mask, mask, Size(3,3) );

    /// Create Window
    cout << contouring() << endl;
  }
  waitKey(0);
  return(0);
}

/** @function thresh_callback */
int contouring()
{
  int numObjects = 0;
  
  vector<vector<Point> > contours;
  vector<Vec4i> hierarchy;

  /// Detect edges using canny
  Canny( mask, mask, thresh, thresh*2, 3 );
  /// Find contours
  findContours( mask, contours, hierarchy, CV_RETR_LIST, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );
  /// Draw contours
  Mat drawing = Mat::zeros( mask.size(), CV_8UC3 );
  for( int i = 0; i< contours.size(); i++ ){
    Scalar color = Scalar( rng.uniform(0, 255), rng.uniform(0,255), rng.uniform(0,255) );
    double area = contourArea(contours[i], true);
    if (area < 500 )
      continue;
    numObjects +=1;
    drawContours( src, contours, i, color, 2, 8, hierarchy, 0, Point() );
  }
  /// Show in a window
  namedWindow( "original", CV_WINDOW_AUTOSIZE );
  imshow( "original", src );
  return numObjects;
}