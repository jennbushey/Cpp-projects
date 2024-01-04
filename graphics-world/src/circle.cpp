/*
 * File Name: circle.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle(double x, double y, double radius, const char *shapeName) : Shape(x, y, shapeName), radius(radius) {}

Circle::Circle(const Circle &other) : Shape(other), radius(other.radius) {}

Circle &Circle::operator=(const Circle &rhs)
{
    if (this != &rhs)
    {
        Shape::operator=(rhs);
        radius = rhs.radius;
    }
    return *this;
}

double Circle::get_radius() const
{
    return radius;
}

void Circle::set_radius(double radius)
{
    this->radius = radius;
}

double Circle::area()
{
    return M_PI * pow(get_radius(),2);
}

double Circle::perimeter()
{
    return 2 * M_PI * get_radius();
}

void Circle::display()
{
    cout << "\n\nCircle Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getx();
    cout << "\nY-coordinate: " << getOrigin().gety();
    cout << "\nRadius: " << get_radius();
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter() << endl;
}