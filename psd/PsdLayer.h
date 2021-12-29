//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PSDLAYER_H
#define IMG_PARSER_PSDLAYER_H


#include "BoundBox.h"
#include "Pixel.h"
#include "Image.h"
#include "string"

class PsdLayer {
public:
    int id; //id for generation
    std::string title;
    BoundBox boundBox;
    Pixel *pixels;

    Image exportAsImage();
};


#endif //IMG_PARSER_PSDLAYER_H
