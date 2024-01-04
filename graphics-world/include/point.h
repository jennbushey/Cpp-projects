/*
 * File Name: point.h
 * Assignment: ENSF 614 Lab 5 - Exercise B
 * Completed by: Jenn Bushey
 * Submission Date: October 23, 2023
 */


#ifndef POINT_H
#define POINT_H
/* 
The following class represents a point in a Cartesian plane. It has 3 data members x and y coordinates and an id number. 
*/
class Point{
    private:
        double x; // the x part of coordinates
        double y; // the y part of a coordinates
        int id; // the id number for the point

    public:
        //
        Point(double x, double y);
        // PROMISES: receives an x, y coordinate and initializes
        //           the x and y coordinates and automatically assigns the 
        //           first id to 1001.

        void display();
        // PROMISES: displays x and y coordinates

        int counter();
        // RETURNS: returns the number of objects of class Point at any time

        double distance(Point p);
        // PROMISES: returns the distance between 2 points
        
        static double distance(Point p1, Point p2);
        // PROMISES: returns the distance between 2 points

        void setx(double x);
        // PROMISES: sets the x-coordinate in point

        void sety(double y);
        // PROMISES: sets the y-coordinate in point

        double getx() const; 
        // PROMISES: gets the x-coordinate in point
        
        double gety() const;
        // PROMISES: gets the y-coordinate in point

        int getid() const;
        // PROMISES: returns the id number for the point
};

#endif /* POINT_H */