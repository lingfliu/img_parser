//
// Created by Lingfeng Liu on 2021/12/29.
//

#include "PsdDiffer.h"

PsdDiffer PsdDiffer::compare(PsdImage &img1, PsdImage &img2) {
    std::list<PsdLayer> layers1 = img1.layers;
    std::list<PsdLayer> layers2 = img2.layers;

    std::list<PsdLayer>::iterator iter1;
    std::list<PsdLayer>::iterator iter2;
    for (iter1 = layers1.begin(); iter1 != layers1.end(); iter1 ++) {
        PsdLayer l1 = *iter1;
        for (iter2 = layers2.begin(); iter2 != layers2.end(); iter2 ++) {
            PsdLayer l2 = *iter2;

            //layers with identical title are related
            if (l1.title == l2.title) {
                //TODO: put layer into layer map
            }
        }
    }
    return PsdDiffer();
}
