#include <iostream>
#include "rectangle.hpp"
#include "triangle.hpp"

int main(int argc, char** argv)
{
    Rectangle kotak(3);
    Triangle samaSisi(3);
    Triangle samaKaki(3, 3);

    std::cout << "Kotak dengan sisi 3" << std::endl;
    std::cout << "Luas: " << kotak.area() << std::endl;
    std::cout << "Keliling: " << kotak.perimeter() << std::endl << std::endl;

    std::cout << "Segitiga sama sisi dengan sisi 3" << std::endl;
    std::cout << "Luas: " << samaSisi.area() << std::endl;
    std::cout << "Keliling: " << samaSisi.perimeter() << std::endl << std::endl;

    std::cout << "Segitiga sama kaki dengan alas 3, tinggi 3" << std::endl;
    std::cout << "Luas: " << samaKaki.area() << std::endl;
    std::cout << "Keliling: " << samaKaki.perimeter() << std::endl << std::endl;
}