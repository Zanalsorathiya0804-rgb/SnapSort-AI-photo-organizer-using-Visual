#include "image_processor.h"
#include <filesystem>
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <sstream>
#include <iomanip>

namespace fs = std::filesystem;

std::vector<ImageData> ImageProcessor::loadImages(const std::string& folder) {
    std::vector<ImageData> data;
    for (const auto& entry : fs::directory_iterator(folder)) {
        if (entry.path().extension() == ".jpg" || entry.path().extension() == ".png") {
            cv::Mat img = cv::imread(entry.path().string(), cv::IMREAD_GRAYSCALE);
            if (!img.empty()) {
                ImageData d;
                d.filename = entry.path().filename().string();
                d.image = img;
                d.timestamp = fs::last_write_time(entry).time_since_epoch().count();
                d.hash = hashImage(img);
                data.push_back(d);
            }
        }
    }
    return data;
}

std::string ImageProcessor::hashImage(const cv::Mat& img) {
    cv::Mat resized, binary;
    cv::resize(img, resized, cv::Size(8, 8));
    cv::threshold(resized, binary, 128, 255, cv::THRESH_BINARY);
    std::stringstream hash;
    for (int i = 0; i < binary.rows; ++i)
        for (int j = 0; j < binary.cols; ++j)
            hash << (binary.at<uchar>(i, j) > 0 ? "1" : "0");
    return hash.str();
}