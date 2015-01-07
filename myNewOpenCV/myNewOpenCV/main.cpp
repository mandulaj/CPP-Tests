#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>

using namespace std;
using namespace cv;


int main(){

	Mat m;

	VideoCapture cap;
	cap.open(0);
	cout<<cap.isOpened()<<endl;

	namedWindow("window",1);

	while(1){

		cap>>m;

		imshow("window",m);

		waitKey(33);
	}




	return 0;
}