cmake_minimum_required(VERSION 3.20)
project(img_parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(img_parser main.cpp psd/PsdImage.cpp psd/PsdImage.h psd/PsdLayer.cpp psd/PsdLayer.h psd/BoundBox.cpp psd/BoundBox.h psd/Pixel.cpp psd/Pixel.h psd/Image.cpp psd/Image.h psd/PsdParser.cpp psd/PsdParser.h psd/PsdMeta.cpp psd/PsdMeta.h psd/PsdDiffer.cpp psd/PsdDiffer.h)
