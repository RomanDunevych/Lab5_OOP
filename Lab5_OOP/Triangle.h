// Triangle.h
#pragma once
#include <cmath>
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    // Конструктори
    Triangle() : sideA(1), sideB(1), sideC(1) {} // Конструктор за замовчуванням
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    // Методи для доступу та зміни сторін
    void setSides(double a, double b, double c) {
        sideA = a;
        sideB = b;
        sideC = c;
    }

    double getSideA() const { return sideA; }
    double getSideB() const { return sideB; }
    double getSideC() const { return sideC; }

    // Метод для обчислення периметра
    double getPerimeter() const {
        return sideA + sideB + sideC;
    }

    // Метод для обчислення кутів за формулою косинусів
    void calculateAngles(double& angleA, double& angleB, double& angleC) const {
        angleA = acos((sideB * sideB + sideC * sideC - sideA * sideA) / (2 * sideB * sideC)) * (180 / M_PI);
        angleB = acos((sideA * sideA + sideC * sideC - sideB * sideB) / (2 * sideA * sideC)) * (180 / M_PI);
        angleC = acos((sideA * sideA + sideB * sideB - sideC * sideC) / (2 * sideA * sideB)) * (180 / M_PI);
    }

    // Виведення інформації про трикутник
    void display() const {
        double angleA, angleB, angleC;
        calculateAngles(angleA, angleB, angleC);
        std::cout << "Sides: " << sideA << ", " << sideB << ", " << sideC << std::endl;
        std::cout << "Angles: " << angleA << ", " << angleB << ", " << angleC << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
    }
};
