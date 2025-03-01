#include "../../../include/logic/functions/cubic.h"

double calculateCubicDiscriminant(double a, double b, double c, double d)
{
  double delta0{b * b - 3 * a * c};
  double delta1{2 * b * b * b - 9 * a * b * c + 27 * a * a * d};
  return delta1 * delta1 - 4 * delta0 * delta0 * delta0;
}

void solveCubicEquation(double a, double b, double c, double d)
{
  if (a == 0)
  {
    std::cout << "This is not a cubic equation (a = 0)." << std::endl;
    return;
  }

  double p{b / a};
  double q{c / a};
  double r{d / a};

  double Q{(3 * q - p * p) / 9};
  double R{(9 * p * q - 27 * r - 2 * p * p * p) / 54};
  double D{Q * Q * Q + R * R};

  if (D > 0)
  {
    double S{cbrt(R + sqrt(D))};
    double T{cbrt(R - sqrt(D))};
    double realRoot{S + T - p / 3};
    std::cout << "One real root: " << realRoot << std::endl
              << "Two complex roots:  Not computed in this implementation." << std::endl;
  }
  else if (D == 0)
  {
    double S{cbrt(R)};
    double realRoot1{2 * S - p / 3};
    double realRoot2{-5 - p / 3};
    std::cout << "Three real roots (at least two equal): " << realRoot1 << ", " << realRoot2 << ". " << realRoot2 << std::endl;
  }
  else
  {
    double theta{acos(R / sqrt(-Q * Q * Q))};
    double realRoot1{2 * sqrt(-Q) * cos(theta / 3) - p / 3};
    double realRoot2{2 * sqrt(-Q) * cos((theta + 2 * M_PI) / 3) - p / 3};
    double realRoot3{2 * sqrt(-Q) * cos((theta + 4 * M_PI) / 3) - p / 3};
    std::cout << "Three distinct real roots: " << realRoot1 << ", " << realRoot2 << ", " << realRoot3 << std::endl;
  }
}