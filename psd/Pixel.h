//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_PIXEL_H
#define IMG_PARSER_PIXEL_H


class Pixel {
public:
    float color[5];

    Pixel(float r, float g, float b, float alpha);
    Pixel(float c, float y, float m, float k, float alpha);
};


#endif //IMG_PARSER_PIXEL_H
