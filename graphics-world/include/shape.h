/*
 * File Name: shape.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
    Point origin;
    char *shapeName;

public:
    Shape(double x, double y, const char *shapeName);
    // PROMISES: a constructor that initializes the data members of class Shape

    Shape(const Shape &other);
    // PROMISES: a deep copy due to raw pointer attribute

    Shape &operator=(const Shape &rhs);
    // PROMISES: assigns the = operator to shape objects

    virtual ~Shape(){}
    // PROMISES: destroys the shape object

    Point& getOrigin();
    // PROMISES: returns a reference to point origin. 

    char* getName() const;
    // PROMISES: returns the name of the shape

    virtual void display()=0; // pure virtual 
    // PROMISES: displays coordinate and dimension information about shapes

    virtual double area()=0; // pure virtual 
    // PROMISES: displays area information about shapes

    virtual double perimeter()=0; // pure virtual 
    // PROMISES: displays perimeter information about shapes

    double distance(Shape &other);
    // PROMISES: the distance between two shapes

    static double distance(Shape &the_shape, Shape &other);
    // PROMISES: the distance between two shapes

    void move(double dx, double dy);
    // PROMISES: changes the position of the shape.
    //           Changes the current x and y coordinates, to x+dx, and y+dx.
};

#endif /* SHAPE_H */