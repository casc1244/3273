#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {


	VideoCapture cap(0);


	while (1)
	{
		Mat InMat;
		Mat OutMat;
		cap >> InMat;
		GaussianBlur(InMat, OutMat,cv::Size( 3,5),1,2);
		imshow("InMat", InMat);
		imshow("OutMat", OutMat);

		waitKey(30);

	}
}