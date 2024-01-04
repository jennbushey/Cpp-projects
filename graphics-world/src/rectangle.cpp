/*
 * File Name: rectangle.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *shapeName) : Shape(x, y, shapeName), Square(x, y, side_a, shapeName), side_b(side_b) {}

Rectangle::Rectangle(const Rectangle &other) : Shape(other), Square(other), side_b(other.side_b) {}

Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
    if (this != &rhs)
    {
        Square::operator=(rhs);
        side_b = rhs.side_b;
    }
    return *this;
}

double Rectangle::get_side_b() const
{
    return side_b;
}

void Rectangle::set_side_b(double side_b)
{
    this->side_b = side_b;
}

double Rectangle::area()
{
    return this->get_side_a() * get_side_b();
}

double Rectangle::perimeter()
{
    return 2 * this->get_side_a() + 2 * get_side_b();
}

void Rectangle::display()
{
    cout << "\n\nRectangle Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getx();
    cout << "\nY-coordinate: " << getOrigin().gety();
    cout << "\nSide a: " << get_side_a();
    cout << "\nSide b: " << side_b;
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter() << endl;
}
