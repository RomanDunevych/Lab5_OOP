// main.cpp
#include <iostream>
#include "Equilateral.h"

int main() {
    // Тестування класу Triangle
    Triangle t(3, 4, 5);
    std::cout << "Triangle:" << std::endl;
    t.display();

    // Тестування класу Equilateral
    Equilateral eq(5);
    std::cout << "\nEquilateral Triangle:" << std::endl;
    eq.display();

    return 0;
}
