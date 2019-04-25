/***************************************************************************
* 
*
*
****************************************************************************/

#include "pch.h"
#include <iostream>
#include<opencv2/opencv.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>

int main()
{
	//画像生成
	cv::Mat img(cv::Size(1024, 768), CV_8UC1, cv::Scalar(0));	
	cv::circle(img, cv::Point(400, 300), 50, cv::Scalar(50), -1, 8, 0);
	cv::circle(img, cv::Point(800, 400), 50, cv::Scalar(199), -1, 8, 0);
	//cv::threshold(img,                // 入力配列（シングルチャンネル，8ビット，あるいは32ビット浮動小数点型）．
	//	img,
	//	200,                // 閾値．
	//	255,                // 閾値処理の種類が THRESH_BINARY や THRESH_BINARY_INV の場合に利用される，最大値の値．
	//	cv::THRESH_BINARY_INV   // 閾値処理の種類.
	//);
	cv::distanceTransform(img, img, cv::DIST_L2,5);
	
	cv::imshow("window", img/20);
	cv::waitKey(100000);
	//getchar();
}

