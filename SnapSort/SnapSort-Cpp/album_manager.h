#pragma once
#include "image_processor.h"

class AlbumManager {
public:
    static void organizeImages(const std::vector<ImageData>& images, const std::string& outputFolder);
};