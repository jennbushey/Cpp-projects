/*
 * File Name: circle.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : virtual public Shape
{
private:
    double radius; // the radius of a circle
public:
    Circle(double x, double y, double radius, const char *shapeName);
    
    Circle(const Circle &other);
    // PROMISES: a copy constructor

    Circle &operator=(const Circle &rhs);
    // PROMISES: assigns the = operator to circle objects

    ~Circle(){}
    // PROMISES: destroys the Circle object

    double area();
    // PROMISES: returns the area of a Circle

    double perimeter();
    // PROMISES: returns the perimeter of a Circle

    double get_radius() const;
    // PROMISES: returns the length of radius

    void set_radius(double radius);
    // PROMISES: sets the length of radius

    void display();
    // PROMISES: that displays the name, x and y coordinates of the origin,
    //           side_a, area, and perimeter of a square object in the
    //           following format:
    //           Circle Name:
    //           X-coordinate:
    //           Y-coordinate:
    //           Radius:
    //           Area:
    //           Perimeter:
};
#endif /* CIRCLE_H */
