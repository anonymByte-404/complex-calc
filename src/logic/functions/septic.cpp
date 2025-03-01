#include "../../../include/logic/functions/septic.h"

double evaluateSeptic(double a, double b, double c, double d, double e, double f, double g, double h, double x)
{
  return a * pow(x, 7) + b * pow(x, 6) + c * pow(x, 5) + d * pow(x, 4) + e * pow(x, 3) + f * pow(x, 2) + g * x + h;
}

double evaluateDerivative(double a, double b, double c, double d, double e, double f, double g, double x)
{
  return 7 * a * pow(x, 6) + 6 * b * pow(x, 5) + 5 * c * pow(x, 4) + 4 * d * pow(x, 3) + 3 * e * pow(x, 2) + 2 * f * x + g;
}

double newtonRaphsonSeptic(double a, double b, double c, double d, double e, double f, double g, double h, double initialGuess, double tolerance, int maxIterations)
{
  double x = initialGuess;
  for (int i = 0; i < maxIterations; i++)
  {
    double fx = evaluateSeptic(a, b, c, d, e, f, g, h, x);
    double dfx = evaluateDerivative(a, b, c, d, e, f, g, x);

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