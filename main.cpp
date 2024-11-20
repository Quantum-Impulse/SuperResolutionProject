#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    // Load an image
    cv::Mat image = cv::imread("test_image.jpg");
    if (image.empty()) {
        std::cerr << "Could not read the image!" << std::endl;
        return 1;
    }

    // Display the image
    cv::imshow("Display Window", image);
    cv::waitKey(0);

    return 0;
}
