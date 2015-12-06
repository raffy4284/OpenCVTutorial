#include <cv.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

Mat src; Mat dst;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

double alpha;	/* Simple contrast control */
int beta;	/* Simple brightness control */


int main( int argc, char** argv )
{
    /// Load the source image
    Mat image = imread( argv[1], 1 );
    Mat new_image = Mat::zeros(image.size(), image.type());

    std::cout << "Basic Linear Transforms " << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "* Enter the alpha value [1.0-3.0]: "; 
    std::cin >> alpha;
    std::cout << "* Enter the beta value [0-100]: "; 
    std::cin >> beta;
    for (int y = 0; y < image.rows; y++){
        for(int x = 0; x < image.cols; x++){
            for(int c = 0; c < 3; c++){
                new_image.at<Vec3b>(y,x)[c] = saturate_cast<uchar>(alpha *(image.at<Vec3b>(y,x)[c]) + beta);
            }
        }
    }
    new_image = new_image.t();
    namedWindow("Original Image", 1);
    namedWindow("New Image", 1);
    
    imshow("Original Image", image);
    imshow("New Image", new_image);
  
    waitKey();
    return 0;
}
