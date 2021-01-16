#include <cmath>
#include "triangle.hpp"

float Triangle::perimeter()
{
    // tinggi = 0, sama sisi
    if (this->_tinggi == 0)
    {
        return this->_alas*3;
    }

    // tinggi != 0, sama kaki
    float sisi = sqrt((this->_alas/2)*(this->_alas/2)+this->_tinggi*this->_tinggi);
    return sisi*2+this->_alas;
}

float Triangle::area()
{
    // tinggi != 0, sama kaki
    if (this->_tinggi != 0)
    {
        return this->_alas*this->_tinggi/2;
    }

    // tinggi = 0, sama sisi
    float tinggi = sqrt(this->_alas*this->_alas-(this->_alas/2)*(this->_alas/2));
    return this->_alas*tinggi/2;
}