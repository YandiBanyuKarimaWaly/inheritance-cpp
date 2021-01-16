#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : virtual public Shape {
    const float _sisi;
    public:
        Rectangle(): Rectangle(0) {}
        Rectangle(float sisi): _sisi(sisi) {}

        float perimeter();
        float area();
};

#endif