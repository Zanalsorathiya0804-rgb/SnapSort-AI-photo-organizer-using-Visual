#include "album_manager.h"
#include <filesystem>
#include <map>
#include <opencv2/imgcodecs.hpp>

namespace fs = std::filesystem;

void AlbumManager::organizeImages(const std::vector<ImageData>& images, const std::string& outputFolder) {
    std::map<std::string, std::vector<ImageData>> albums;
    for (const auto& img : images) {
        albums[img.hash].push_back(img);
    }

    int albumCount = 0;
    for (const auto& [hash, imgs] : albums) {
        std::string albumPath = outputFolder + "/album_" + std::to_string(albumCount++);
        fs::create_directories(albumPath);
        for (const auto& img : imgs) {
            std::string outPath = albumPath + "/" + img.filename;
            cv::imwrite(outPath, img.image);
        }
    }
}