#include "image_processor.h"
#include "album_manager.h"

int main() {
    std::string inputPath = "photos";
    std::string outputPath = "albums";

    std::vector<ImageData> images = ImageProcessor::loadImages(inputPath);
    AlbumManager::organizeImages(images, outputPath);

    std::cout << "Albums created successfully in: " << outputPath << std::endl;
    return 0;
}