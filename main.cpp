#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
//#include <opencv2/core/utility.hpp>

int main() {
//    std::cout << cv::getBuildInformation();
    std::string image_path = "/home/bogdan/Downloads/Lenna_(test_image).png";

    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);
    cv::imshow("Display window", img);
    cv::waitKey(0);

    return 0;
}
