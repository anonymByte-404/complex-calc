#ifndef LINEAR_H_
#define LINEAR_H_

#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateSlope(double x1, double y1, double x2, double y2);
double calculateYIntercept(double m, double x, double y);
double solveLinearEquation(double a, double b, double c, double d);
double distancePointToLine(double A, double B, double C, double x0, double y0);
bool areLinesParallel(double m1, double m2);
bool areLinesPerpendicular(double m1, double m2);
double angleBetweenLines(double m1, double m2);
void findIntersection(double m1, double b1, double m2, double b2);

#endif