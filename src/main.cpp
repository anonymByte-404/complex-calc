#include <iostream>
#include <vector>
#include <limits>
#include "algebra_solver.h"

void solveLinear()
{
  double a, b;
  std::cout << "Solve the linear equation ax + b = 0\n";
  std::cout << "Enter the value of a: ";
  std::cin >> a;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for a: ";
    std::cin >> a;
  }

  std::cout << "Enter the value of b: ";
  std::cin >> b;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for b: ";
    std::cin >> b;
  }

  solveLinearEquation(a, b);
}

void solveQuadratic()
{
  double a, b, c;
  std::cout << "Solve the quadratic equation ax^2 + bx + c = 0\n";
  std::cout << "Enter the value of a: ";
  std::cin >> a;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for a: ";
    std::cin >> a;
  }

  std::cout << "Enter the value of b: ";
  std::cin >> b;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for b: ";
    std::cin >> b;
  }

  std::cout << "Enter the value of c: ";
  std::cin >> c;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for c: ";
    std::cin >> c;
  }

  solveQuadraticEquation(a, b, c);
}

void evaluatePolynomial()
{
  int degree;
  std::cout << "Enter the degree of the polynomial: ";
  std::cin >> degree;

  while (std::cin.fail() || degree < 0)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid degree (non-negative integer): ";
    std::cin >> degree;
  }

  std::vector<double> coefficients(degree + 1);
  std::cout << "Enter the coefficients from highest degree to constant term: ";
  for (int i = 0; i <= degree; ++i)
  {
    std::cin >> coefficients[i];
    while (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a valid coefficient for degree " << (degree - i) << ": ";
      std::cin >> coefficients[i];
    }
  }

  double x;
  std::cout << "Enter the value of x to evaluate the polynomial: ";
  std::cin >> x;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid number for x: ";
    std::cin >> x;
  }

  double result = evaluatePolynomial(coefficients, x);
  std::cout << "The result of the polynomial evaluation is: " << result << std::endl;
}

int main()
{
  int choice;

  do
  {
    std::cout << "\nChoose an equation to solve or perform an operation:\n";
    std::cout << "1. Solve a Linear Equation (ax + b = 0)\n";
    std::cout << "2. Solve a Quadratic Equation (ax^2 + bx + c = 0)\n";
    std::cout << "3. Evaluate a Polynomial\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    while (std::cin.fail() || choice < 1 || choice > 4)
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid choice. Please enter a valid option (1-4): ";
      std::cin >> choice;
    }

    switch (choice)
    {
    case 1:
      solveLinear();
      break;
    case 2:
      solveQuadratic();
      break;
    case 3:
      evaluatePolynomial();
      break;
    case 4:
      std::cout << "Exiting program...\n";
      break;
    default:
      std::cout << "Invalid choice, please try again.\n";
    }
  } while (choice != 4);

  return 0;
}
