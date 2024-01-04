/*
 * File Name: shape.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char *shapeName) : origin(Point(x, y)), shapeName((char *)shapeName) {}

Shape::Shape(const Shape &other) : origin(other.origin)
{
    delete[] shapeName;
    shapeName = other.shapeName;
}

Shape &Shape::operator=(const Shape &rhs)
{
    if (this != &rhs)
    {
        shapeName = rhs.shapeName;
        origin = rhs.origin;
    }
    return *this;
}

Point &Shape::getOrigin()
{
    return origin;
}

char *Shape::getName() const
{
    return shapeName;
}

double Shape::distance(Shape &other)
{
    return this->getOrigin().distance(other.getOrigin());
}

double Shape::distance(Shape &the_shape, Shape &other)
{
    return Point::distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy)
{
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}
