#ifndef SEPTIC_H
#define SEPTIC_H

#include <cmath>
#include <iostream>

double evaluateSeptic(double a, double b, double c, double d, double e, double f, double g, double h, double x);
double evaluateDerivative(double a, double b, double c, double d, double e, double f, double g, double x);
double newtonRaphsonSeptic(double a, double b, double c, double d, double e, double f, double g, double h, double initialGuess, double tolerance = 1e-6, int maxIterations = 1000);

#endif