// Equilateral.h
#pragma once
#include "Triangle.h"

class Equilateral {
private:
    Triangle triangle;
    double area;

public:
    // ������������
    Equilateral() : triangle(1, 1, 1) {
        calculateArea();
    }
    Equilateral(double side) : triangle(side, side, side) {
        calculateArea();
    }

    // ����� ��� ���������� �����
    void calculateArea() {
        double side = triangle.getSideA();
        area = (sqrt(3) / 4) * side * side;
    }

    // ����� ��� ��������� ���������� ��� ������������ ���������
    void display() const {
        triangle.display();
        std::cout << "Area: " << area << std::endl;
    }
};
