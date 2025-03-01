#include "../../../include/logic/functions/octic.h"

double evaluateOctic(double a, double b, double c, double d, double e, double f, double g, double h, double i, double x)
{
  return a * pow(x, 8) + b * pow(x, 7) + c * pow(x, 6) + d * pow(x, 5) + e * pow(x, 4) + f * pow(x, 3) + g * pow(x, 2) + h * x + i;
}

double evaluateDerivative(double a, double b, double c, double d, double e, double f, double g, double h, double x)
{
  return 8 * a * pow(x, 7) + 7 * b * pow(x, 6) + 6 * c * pow(x, 5) + 5 * d * pow(x, 4) + 4 * e * pow(x, 3) + 3 * f * pow(x, 2) + 2 * g * x + h;
}

double newtonRaphsonOctic(double a, double b, double c, double d, double e, double f, double g, double h, double i, double initialGuess, double tolerance, int maxIterations)
{
  double x = initialGuess;
  for (int iter = 0; iter < maxIterations; iter++)
  {
    double fx = evaluateOctic(a, b, c, d, e, f, g, h, i, x);
    double dfx = evaluateDerivative(a, b, c, d, e, f, g, h, x);

    if (fabs(dfx) < tolerance)
    {
      std::cout << "Derivative is too small. No convergence." << std::endl;
      return NAN;
    }

    double xNew = x - fx / dfx;

    if (fabs(xNew - x) < tolerance)
    {
      return xNew;
    }

    x = xNew;
  }

  std::cout << "Maximum iterations reached. No convergence." << std::endl;
  return NAN;
}