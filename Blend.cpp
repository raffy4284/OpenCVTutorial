#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;

Mat src; Mat dst;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

double alpha;   /* Simple contrast control */
int beta;       /* Simple brightness control */


int main( int argc, char** argv )
{
    /// Load the source image
    Mat dst, dst2;
    Mat f0 = imread( argv[1], 1 );
    Mat f1 = imread(argv[2],1);
    Size size(f0.cols,f0.rows);
    resize(f1,dst2,size);
    alpha = 0.5; double beta; double input;
    cout << "Simple Linear Blender" << endl;
    cout << "Enter alpha [0-1]: ";
    cin >> input;
    alpha = input;
    
    namedWindow("LinearBlend",1);
    beta = 1.0-alpha;
    addWeighted(f0, alpha,dst2,beta,0.0, dst);
    
    imshow("Linear Blend", dst);
    waitKey(0);
    return 0;
}
