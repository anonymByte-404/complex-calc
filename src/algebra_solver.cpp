#include "algebra_solver.h"
#include <iostream>
#include <cmath>
#include <vector>

void solveLinearEquation(double a, double b)
{
  if (a == 0)
  {
    if (b == 0)
    {
      std::cout << "The equation has infinite solutions.\n";
    }
    else
    {
      std::cout << "No solution exists.\n";
    }
  }
  else
  {
    double x = -b / a;
    std::cout << "The solution to the linear equation " << a << "x + " << b << " = 0 is: x = " << x << "\n";
  }
}

void solveQuadraticEquation(double a, double b, double c)
{
  if (a == 0)
  {
    std::cerr << "This is not a quadratic equation because a = 0.\n";
    return;
  }

  double discriminant = b * b - 4 * a * c;

  if (discriminant > 0)
  {
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    std::cout << "The quadratic equation has two real solutions: x1 = " << root1 << " and x2 = " << root2 << "\n";
  }
  else if (discriminant == 0)
  {
    double root = -b / (2 * a);
    std::cout << "The quadratic equation has one real solution: x = " << root << "\n";
  }
  else
  {
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    std::cout << "The quadratic equation has two complex solutions: x1 = " << realPart << " + " << imaginaryPart << "i and x2 = " << realPart << " - " << imaginaryPart << "i\n";
  }
}

double evaluatePolynomial(const std::vector<double> &coefficients, double x)
{
  double result = 0.0;
  int degree = coefficients.size() - 1;

  for (int i = 0; i <= degree; ++i)
  {
    result += coefficients[i] * pow(x, degree - i);
  }

  return result;
}
