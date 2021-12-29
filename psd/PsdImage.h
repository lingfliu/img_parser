//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PSDIMAGE_H
#define IMG_PARSER_PSDIMAGE_H


#include "PsdLayer.h"
#include "Image.h"
#include "PsdMeta.h"
#include "list"

class PsdImage {
public:
    PsdMeta meta;
    std::list<PsdLayer> layers;

    Image exportAsImage();
};


#endif //IMG_PARSER_PSDIMAGE_H
