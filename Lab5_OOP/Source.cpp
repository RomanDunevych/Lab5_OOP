// main.cpp
#include <iostream>
#include "Equilateral.h"

int main() {
    // ���������� ����� Triangle
    Triangle t(3, 4, 5);
    std::cout << "Triangle:" << std::endl;
    t.display();

    // ���������� ����� Equilateral
    Equilateral eq(5);
    std::cout << "\nEquilateral Triangle:" << std::endl;
    eq.display();

    return 0;
}
