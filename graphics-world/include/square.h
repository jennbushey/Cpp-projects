/*
 * File Name: square.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : virtual public Shape{
    private:
        double side_a;  // represents the side length of the square

    public:
        Square(double x, double y, double side_a, const char* shapeName);
        // PROMISES: receives an x, y coordinate, side_a length, name and 
        //           initializes these values.

        Square(const Square &other);
        // PROMISES: a copy constructor

        Square &operator=(const Square &rhs);
        // PROMISES: assigns the = operator to square objects

        ~Square(){}
        // PROMISES: destroys the square object

        double get_side_a() const;
        // PROMISES: returns the length of side_a

        void set_side_a(double side_a);
        // PROMISES: sets the length of side_a

        double area();
        // PROMISES: returns the area of a square

        double perimeter();
        // PROMISES: returns the perimeter of a square

        virtual void display();
        // PROMISES: that displays the name, x and y coordinates of the origin, 
        //           side_a, area, and perimeter of a square object in the 
        //           following format:
        //           Square Name:
        //           X-coordinate:
        //           Y-coordinate:
        //           Side a:
        //           Area:
        //           Perimeter:

};

#endif /* SQUARE_H */