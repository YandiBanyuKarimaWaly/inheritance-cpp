#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

class Triangle : virtual public Shape {
    const float _alas, _tinggi;
    public:
        Triangle(): Triangle(0, 0) {}
        Triangle(float alas): Triangle(alas, 0) {} // Sama sisi
        Triangle(float alas, float tinggi): _alas(alas), _tinggi(tinggi) {} // Sama kaki

        float perimeter();
        float area();
};

#endif