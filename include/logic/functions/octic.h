#ifndef OCTIC_H
#define OCTIC_H

#include <cmath>
#include <iostream>

double evaluateOctic(double a, double b, double c, double d, double e, double f, double g, double h, double i, double x);
double evaluateDerivative(double a, double b, double c, double d, double e, double f, double g, double h, double x);
double newtonRaphsonOctic(double a, double b, double c, double d, double e, double f, double g, double h, double i, double initialGuess, double tolerance = 1e-6, int maxIterations = 1000);

#endif