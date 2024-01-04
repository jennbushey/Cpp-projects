/*
 * File Name: curvecut.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */

#ifndef CURVECUT_H
#define CURVECUT_H
#include "circle.h"
#include "rectangle.h"

class CurveCut : public Circle, public Rectangle{
    private:
        double radius; // the radius of a circle
    public:
        CurveCut(double x, double y, double side_a, double side_b, double radius, const char *shapeName);
        
        CurveCut(const CurveCut &other);
        // PROMISES: a copy constructor

        CurveCut &operator=(const CurveCut &rhs);
        // PROMISES: assigns the = operator to CurveCut objects

        ~CurveCut(){}
        // PROMISES: destroys the CurveCut object

        double area();
        // PROMISES: returns the area of a CurveCut

        double perimeter();
        // PROMISES: returns the perimeter of a CurveCut

        void display();
        // PROMISES: that displays the name, x and y coordinates of the origin,
        //           side_a, area, and perimeter of a square object in the
        //           following format:
        //           CurveCut Name:
        //           X-coordinate:
        //           Y-coordinate:
        //           Radius:
        //           Area:
        //           Perimeter:


};
#endif /* CURVECUT_H */
