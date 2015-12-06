#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main (int argc, char** argv)
{
  //Open the first webcam plugged in the computer
  cv::VideoCapture camera(0); 
  if(!camera.isOpened())
  {
    std::cerr << "ERROR: Could not open camera" << std::endl;
    return 1;
  }
  Mat blend = imread(argv[1],1);

  //Create a window to display the images from the webcam
  cv::namedWindow("Webcam", CV_WINDOW_AUTOSIZE);
  cv::Mat frame;
  camera >> frame;
  Size size(frame.cols, frame.rows);
  resize(blend,blend,size); 
  //Pick up a new frame and display it until you press a key
  while(1)
  {
    //This will contain the image from the webcam
    
    //Capture the next frame from the webcam
    camera >> frame;
    addWeighted(frame, 0.5,blend,0.5,0.0, frame);
    //Show the image on the window
    cv::imshow("Webcam", frame);

    //Wait for a key to be pressed
    if (cv::waitKey(30) >= 0) break;
  }

  //Success. The program accomplished its mission and now it can go
  // to the heaven of programs.
  return 0;
}

