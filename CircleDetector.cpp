// #include "opencv2/highgui/highgui.hpp"
// #include <iostream>
// #include <opencv2/imgproc/imgproc.hpp>
// #include <opencv2/opencv.hpp>

// using namespace std;
// using namespace cv;

// int main (int argc, char** argv)
// {
//   //Open the first webcam plugged in the computer
//   cv::VideoCapture camera(0); 
//   if(!camera.isOpened())
//   {
//     std::cerr << "ERROR: Could not open camera" << std::endl;
//     return 1;
//   }
//   Mat blend = imread(argv[1],1);

//   //Create a window to display the images from the webcam
//   cv::namedWindow("Webcam", CV_WINDOW_AUTOSIZE);
//   cv::Mat frame;
//   camera >> frame;
//   Size size(frame.cols, frame.rows);
//   resize(blend,blend,size); 
//   //Pick up a new frame and display it until you press a key
//   while(1)
//   {
//     //This will contain the image from the webcam
    
//     //Capture the next frame from the webcam
//     camera >> frame;
//     addWeighted(frame, 0.3,blend,0.7,0.0, frame);
//     //Show the image on the window
//     cv::imshow("Webcam", frame);

//     //Wait for a key to be pressed
//     if (cv::waitKey(30) >= 0) break;
//   }

//   //Success. The program accomplished its mission and now it can go
//   // to the heaven of programs.
//   return 0;
// }

#include <cstdio>
#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>


int main(int argc, char** argv) {
  using namespace cv;

  cv::VideoCapture camera(1);
  cv::Mat src;
  cv::Mat orig;
  
  
  while(1){
    camera >> src;
    orig = src.clone();


    cvtColor(src, src, CV_BGR2GRAY );

    GaussianBlur( src, src, cv::Size(9, 9), 2, 2 );
    std::vector<Vec3f> circles;

    //get circleCVs!
    HoughCircles(src, circles, CV_HOUGH_GRADIENT,
    2,   // accumulator resolution (size of the image / 2)
    5,  // minimum distance between two circles
    100, // Canny high threshold
    100, // minimum number of votes
    0, 100); // min and max radius

    //Mat zeros = Mat::zeros(src.rows, src.cols,CV_32F);
    std::vector<cv::Vec3f>::const_iterator itc= circles.begin();
    while (itc!=circles.end()) {

      cv::circle(orig,
      cv::Point((*itc)[0], (*itc)[1]), // circle centre
      (*itc)[2],       // circle radius
      cv::Scalar(255), // color
      2);              // thickness

      ++itc;
    }
    cv::namedWindow("image",CV_WINDOW_AUTOSIZE);
    cv::imshow("image",orig);
    //Wait for a key to be pressed
    if (cv::waitKey(30) >= 0) break;
  }
  cv::waitKey(0);
  return 0;
}