#include "../../../include/logic/functions/sextic.h"

double evaluateSextic(double a, double b, double c, double d, double e, double f, double g, double x)
{
  return a * pow(x, 6) + b * pow(x, 5) + c * pow(x, 4) + d * pow(x, 3) + e * pow(x, 2) + f * x + g;
}

double evaluateDerivative(double a, double b, double c, double d, double e, double f, double x)
{
  return 6 * a * pow(x, 5) + 5 * b * pow(x, 4) + 4 * c * pow(x, 3) + 3 * d * pow(x, 2) + 2 * e * x + f;
}

double newtonRaphsonSextic(double a, double b, double c, double d, double e, double f, double g, double initialGuess, double tolerance, int maxIterations)
{
  double x = initialGuess;
  for (int i = 0; i < maxIterations; i++)
  {
    double fx = evaluateSextic(a, b, c, d, e, f, g, x);
    double dfx = evaluateDerivative(a, b, c, d, e, f, x);

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