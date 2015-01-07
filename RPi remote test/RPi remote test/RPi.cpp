// RPi


#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#include<iostream>

#include <sstream>
#include <string>
#include <iostream>

#include <opencv\cv.h>

#define ADDRESS "http://10.0.0.1:8080/?action=stream?dummy=param.mjpg"

///////////////////////////////////////////////////////////////////////////////////////////////////
using namespace cv;



int main() {
	cv::VideoCapture capWebcam(ADDRESS);		// declare a VideoCapture object and associate to webcam, 0 => use 1st webcam "http://10.0.0.1:8080/?action=stream?dummy=param.mjpg"

	if(capWebcam.isOpened() == false) {			// check if VideoCapture object was associated to webcam successfully
		std::cout << "error: capWebcam not accessed successfully\n\n";	// if not, print error message to std out
		return(1);														// and exit program
	}

	cv::Mat matOriginal;		// "Matrix object, used for images in OpenCV2, this will be the input image from the webcam
	
	
	cv::namedWindow("Original");			// original image from webcam

	char charCheckForEscKey = 0;

	while(charCheckForEscKey != 27) {		// for each frame (until the Esc key is pressed) . . .
		if(capWebcam.read(matOriginal) == NULL) {	// get next frame from webcam, check if returned NULL
			std::cout << "error: frame not read from webcam\n\n";	// if returned NULL, print error message to std out
			break;													// and jump out of while loop
		}

		
		cv::imshow("Original", matOriginal);			// original image with detected ball overlay

		charCheckForEscKey = cv::waitKey(10);			// delay (in ms) and get key press, if any
	}	// end while

	return(0);
}
