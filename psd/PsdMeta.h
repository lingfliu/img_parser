//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PSDMETA_H
#define IMG_PARSER_PSDMETA_H

#define VERSION_6   1
#define VERSION_8   2
#define VERSION_9   3
#define VERSION_C4  4
#define VERSION_C5  5
#define VERSION_CC  6

#define COLOR_MODE_RGB 1
#define COLOR_MODE_CYMK 2

/**
 * Meta info from the file header
 */
class PsdMeta {
public:
    int h;
    int w;
    int version;
    int colorMode;
};


#endif //IMG_PARSER_PSDMETA_H
