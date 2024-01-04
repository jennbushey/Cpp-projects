/*
 * File Name: square.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */
#include <iostream>
#include "square.h"
using namespace std;

Square::Square(double x, double y, double side_a, const char *shapeName) : Shape(x, y, shapeName), side_a(side_a) {}

Square::Square(const Square &other) : Shape(other), side_a(other.side_a) {}

Square &Square::operator=(const Square &rhs)
{
    if (this != &rhs)
    {
        Shape::operator=(rhs);
        side_a = rhs.side_a;
    }
    return *this;
}

double Square::get_side_a() const
{
    return side_a;
}

void Square::set_side_a(double side_a)
{
    this->side_a = side_a;
}

double Square::area()
{
    return pow(get_side_a(), 2);
}

double Square::perimeter()
{
    return get_side_a() * 4;
}

void Square::display()
{
    cout << "\n\nSquare Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getx();
    cout << "\nY-coordinate: " << getOrigin().gety();
    cout << "\nSide a: " << side_a;
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter() << endl;
}
