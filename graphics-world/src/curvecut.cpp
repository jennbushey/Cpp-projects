/*
 * File Name: curvecut.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#include <iostream>
#include "curvecut.h"
using namespace std;

CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char *shapeName) : Shape(x, y, shapeName), Square(x, y, side_a, shapeName), Circle(x, y, radius, shapeName), Rectangle(x, y, side_a, side_b, shapeName) {} 

CurveCut::CurveCut(const CurveCut &other) : Shape(other), Square(other), Circle(other), Rectangle(other),  radius(other.radius) {} 

CurveCut &CurveCut::operator=(const CurveCut &rhs)
{
    if (this != &rhs)
    {
        Circle::operator=(rhs);
        Rectangle::operator=(rhs);
    }
    return *this;
}

double CurveCut::area()
{
    return Rectangle::area() - Circle::area() / 4;
}

double CurveCut::perimeter()
{
    return Rectangle::perimeter() - 2 * get_radius() + Circle::perimeter() / 4;
}

void CurveCut::display()
{
    cout << "\n\nCurveCut Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getx();
    cout << "\nY-coordinate: " << getOrigin().gety();
    cout << "\nWidth: " << get_side_a();
    cout << "\nLength: " << get_side_b();
    cout << "\nRadius: " << get_radius() << endl;
}