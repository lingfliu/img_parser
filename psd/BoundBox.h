//
// Created by Lingfeng Liu on 2021/12/29.
//

#ifndef IMG_PARSER_BOUNDBOX_H
#define IMG_PARSER_BOUNDBOX_H


class BoundBox {
public:
    float x1;
    float y1;
    float x2;
    float y2;

    const bool operator == (BoundBox box2) {
        return x1 == box2.x1 &&
        x2 == box2.x1 &&
        y1 == box2.y1 &&
        y2 == box2.y2;
    }
};


#endif //IMG_PARSER_BOUNDBOX_H
