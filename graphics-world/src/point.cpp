/*
 * File Name: point.cpp
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#include "point.h"
#include <iostream>
using namespace std;

Point::Point(double x, double y) : x(x), y(y), id(1001) {}

void Point::display()
{
    cout << "X-coordinate: " << x;
    cout << "Y-coordinate: " << y;
}

int Point::counter()
{
    id++;
    return getid() - 1000;
}

void Point::setx(double x)
{
    this->x = x;
}

void Point::sety(double y)
{
    this->y = y;
}

double Point::getx() const
{
    return x;
}

double Point::gety() const
{
    return y;
}

double Point::distance(Point p)
{
    return sqrt((pow((this->getx() - p.getx()), 2) + pow((this->gety() - p.gety()), 2)));
}

double Point::distance(Point p1, Point p2)
{
    return sqrt((pow((p2.getx() - p1.getx()), 2) + pow((p2.gety() - p1.gety()), 2)));
}

int Point::getid() const
{
    return id;
}
