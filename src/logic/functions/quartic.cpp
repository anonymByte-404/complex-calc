#include "../../../include/logic/functions/quartic.h"

void solveQuarticEquation(double a, double b, double c, double d, double e)
{
  if (a == 0)
  {
    std::cout << "This is not a quartic equation (a = 0)." << std::endl;
    return;
  }

  double p{b / a};
  double q{c / a};
  double r{d / a};
  double s{e / a};

  double A{q - r * p * p / 8};
  double B{r + p * p * p / 8 - p * q / 2};
  double C{s - 3 * p * p * p / 256 + p * p * q / 16 - p * r / 4};

  double m{};
  double discriminant{256 * pow(C, 3) - 128 * pow(A, 2) * pow(C, 2) + 144 * A * pow(B, 2) * C - 27 * pow(B, 4) + 16 * pow(A, 3) * pow(C, 2) - 4 * pow(A, 3) * pow(B, 2)};

  if (discriminant > 0)
  {
    std::cout << "The equartic equation has one real root and two complex roots." << std::endl;
    return;
  }
  else if (discriminant == 0)
    m = -B / (4 * A);
  else
    m = (-B + sqrt(pow(B, 2) - 4 * A * C)) / (2 * A);

  double alpha{sqrt(2 * m)};
  double beta{-B / (2 * m)};
  double gamma{sqrt(A + 2 * m)};

  double y1{(alpha + gamma) / 2};
  double y2{(alpha - gamma) / 2};
  double y3{(-alpha + gamma) / 2};
  double y4{(-alpha - gamma) / 2};

  double x1{y1 - p / 4};
  double x2{y2 - p / 4};
  double x3{y3 - p / 4};
  double x4{y4 - p / 4};

  std::cout << "Roots of the quartic equation:" << std::endl
            << "x1 = " << x1 << std::endl
            << "x2 = " << x2 << std::endl
            << "x3 = " << x3 << std::endl
            << "x4 = " << x4 << std::endl;
}