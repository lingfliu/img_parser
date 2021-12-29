//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PSDPARSER_H
#define IMG_PARSER_PSDPARSER_H

#include <cstdint>
#include "PsdImage.h"

class PsdParser {
public:
    PsdImage parse(uint8_t *bytes, int len);
};


#endif //IMG_PARSER_PSDPARSER_H
