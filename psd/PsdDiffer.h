//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PSDDIFFER_H
#define IMG_PARSER_PSDDIFFER_H


#include "PsdImage.h"
#include "map"

/**
 * Comparator of two psd images with difference marks
 */
class PsdDiffer {
public:
    std::map<int, std::string> layerMap;
    PsdDiffer compare(PsdImage &img1, PsdImage &img2);
};


#endif //IMG_PARSER_PSDDIFFER_H
