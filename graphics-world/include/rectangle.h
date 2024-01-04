/*
 * File Name: rectangle.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "square.h"

class Rectangle : virtual public Square
{
private:
    double side_b; // represents the length of the second side of the rectangle

public:
    Rectangle(double x, double y, double side_a, double side_b, const char *shapeName);
    
    Rectangle(const Rectangle &other);
    // PROMISES: a copy constructor

    Rectangle &operator=(const Rectangle &rhs);
    // PROMISES: assigns the = operator to rectangle objects

    ~Rectangle(){}
    // PROMISES: destroys the rectangle object

    double area();
    // PROMISES: returns the area of a rectangle

    double perimeter();
    // PROMISES: returns the perimeter of a rectangle

    double get_side_b() const;
    // PROMISES: returns the length of side_b

    void set_side_b(double side_b);
    // PROMISES: sets the length of side_b

    void display();
    // PROMISES: that displays the name, x and y coordinates of the origin,
    //           side_a, area, and perimeter of a square object in the
    //           following format:
    //           Rectangle Name:
    //           X-coordinate:
    //           Y-coordinate:
    //           Side a:
    //           Side b:
    //           Area:
    //           Perimeter:
};

#endif /* RECTANGLE_H */
