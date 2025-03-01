#include "../../../include/logic/functions/linear.h"

double calculateSlope(double x1, double y1, double x2, double y2)
{
  if (x1 == x2)
  {
    std::cout << "Slop is undefined (vertical line)." << std::endl;
    return 0;
  }
  return (y2 - y1) / (x2 - x1);
}

double calculateYIntercept(double m, double x, double y)
{
  return y - m * x;
}

double solveLinearEquation(double a, double b, double c, double d)
{
  if (a == c)
  {
    if (b == d)
      std::cout << "Infinite solutions: Any value of x satisfies the equation." << std::endl;
    else
      std::cout << "No solution: The equation is inconsistent." << std::endl;
    return 0;
  }
  return (d - b) / (a - c);
}

double distancePointToLine(double A, double B, double C, double x0, double y0)
{
  return fabs((A * x0) + (B * y0) + C) / sqrt((A * A) + (B * B));
}

bool areLinesParallel(double m1, double m2)
{
  return m1 == m2;
}

bool areLinesPerpendicular(double m1, double m2)
{
  return m1 * m2 == -1;
}

double angleBetweenLines(double m1, double m2)
{
  return atan(fabs((m2 - m1) / (1 + m1 * m2))) * 180 / M_PI;
}

void findIntersection(double m1, double b1, double m2, double b2)
{
  if (m1 == m2)
  {
    if (b1 == b2)
      std::cout << "The lines are indentical (infinite intersection points)." << std::endl;
    else
      std::cout << "The lines are parallel (no intersection point)." << std::endl;
    return;
  }
  double x{(b2 - b1) / (m1 - m2)};
  double y{m1 * x + b1};
  std::cout << "Intersection point: (" << x << ", " << y << ")" << std::endl;
}