#include "../../../include/logic/functions/quadratic.h"

double calculateDiscriminant(double a, double b, double c)
{
  return b * b - 4 * a * c;
}

void solveQuadraticEquation(double a, double b, double c)
{
  if (a == 0)
  {
    std::cout << "This is not a quadratic equation (a = 0)." << std::endl;
    return;
  }

  double discriminant{calculateDiscriminant(a, b, c)};

  if (discriminant > 0)
  {
    double root1{(-b + sqrt(discriminant)) / (2 * a)};
    double root2{(-b - sqrt(discriminant)) / (2 * a)};
    std::cout << "Two distinct real roots: " << root1 << " and " << root2 << std::endl;
  }
  else if (discriminant == 0)
  {
    double root{-b / (2 * a)};
    std::cout << "One real root (repeated): " << root << std::endl;
  }
  else
  {
    double realPart{-b / (2 * a)};
    double imaginaryPart{sqrt(-discriminant) / (2 * a)};
    std::cout << "Two complex roots: " << realPart << " + " << imaginaryPart << "i and "
              << realPart << " - " << imaginaryPart << "i" << std::endl;
  }
}

void findVertex(double a, double b, double c)
{
  if (a == 0)
  {
    std::cout << "This is not a quadratic equation (a = 0)." << std::endl;
    return;
  }

  double xVertex{-b / (2 * a)};
  double yVertex{pow((a * xVertex), 2) + (b * xVertex) + c};
  std::cout << "Vertex of the parabola: (" << xVertex << ", " << yVertex << ")" << std::endl;
}

void determineRootNature(double a, double b, double c)
{
  if (a == 0)
  {
    std::cout << "This is not a quadratic equation (a = 0)." << std::endl;
    return;
  }

  double discriminant{calculateDiscriminant(a, b, c)};

  if (discriminant > 0)
    std::cout << "The equation has two distinct real roots." << std::endl;
  else if (discriminant == 0)
    std::cout << "The equation has one real root (repeated)." << std::endl;
  else
    std::cout << "The equation has two complex roots." << std::endl;
}