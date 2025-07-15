#pragma once
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>

struct ImageData {
    std::string filename;
    cv::Mat image;
    time_t timestamp;
    std::string hash;
};

class ImageProcessor {
public:
    static std::vector<ImageData> loadImages(const std::string& folder);
    static std::string hashImage(const cv::Mat& img);
};