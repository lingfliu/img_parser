//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_IMAGE_H
#define IMG_PARSER_IMAGE_H


#include "Pixel.h"

class Image {
public:
    int h;
    int w;

    Pixel *pixels;
};


#endif //IMG_PARSER_IMAGE_H
