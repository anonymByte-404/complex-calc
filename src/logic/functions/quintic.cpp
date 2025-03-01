#include "../../../include/logic/functions/quintic.h"

double evaluateQuintic(double a, double b, double c, double d, double e, double f, double x)
{
  return a * pow(x, 5) + b * pow(x, 4) + c * pow(x, 3) + d * pow(x, 2) + e * x + f;
}

double evaluateDerivative(double a, double b, double c, double d, double e, double x)
{
  return 5 * a * pow(x, 4) + 4 * b * pow(x, 3) + 3 * c * pow(x, 2) + 2 * d * x + e;
}

double newtonRaphsonQuintic(double a, double b, double c, double d, double e, double f, double initialGuess, double tolerance, int maxIterations)
{
  double x = initialGuess;
  for (int i = 0; i < maxIterations; i++)
  {
    double fx = evaluateQuintic(a, b, c, d, e, f, x);
    double dfx = evaluateDerivative(a, b, c, d, e, x);

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