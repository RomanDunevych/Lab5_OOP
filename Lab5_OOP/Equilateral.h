// Equilateral.h
#pragma once
#include "Triangle.h"

class Equilateral {
private:
    Triangle triangle;
    double area;

public:
    // Конструктори
    Equilateral() : triangle(1, 1, 1) {
        calculateArea();
    }
    Equilateral(double side) : triangle(side, side, side) {
        calculateArea();
    }

    // Метод для обчислення площі
    void calculateArea() {
        double side = triangle.getSideA();
        area = (sqrt(3) / 4) * side * side;
    }

    // Метод для виведення інформації про рівносторонній трикутник
    void display() const {
        triangle.display();
        std::cout << "Area: " << area << std::endl;
    }
};
