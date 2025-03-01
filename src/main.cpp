#include <iostream>
#include <limits>
#include "algebra_solver.h"

template <typename T>
T getValidatedInput(const std::string& prompt, bool isInteger = false)
{
    T value;
    std::cout << prompt;
    while (true)
    {
        std::cin >> value;
        if (std::cin.fail() || (isInteger && value < 0))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid value: ";
        }
        else
        {
            break;
        }
    }
    return value;
}

void solveLinear()
{
    double a = getValidatedInput<double>("Enter the value of a (for ax + b = 0): ");
    double b = getValidatedInput<double>("Enter the value of b (for ax + b = 0): ");
    solveLinearEquation(a, b);
}

void solveQuadratic()
{
    double a = getValidatedInput<double>("Enter the value of a (for ax^2 + bx + c = 0): ");
    double b = getValidatedInput<double>("Enter the value of b (for ax^2 + bx + c = 0): ");
    double c = getValidatedInput<double>("Enter the value of c (for ax^2 + bx + c = 0): ");
    solveQuadraticEquation(a, b, c);
}

void evaluatePolynomial()
{
    int degree = getValidatedInput<int>("Enter the degree of the polynomial (non-negative integer): ", true);
    std::vector<double> coefficients(degree + 1);
    
    std::cout << "Enter the coefficients from highest degree to constant term:\n";
    for (int i = 0; i <= degree; ++i)
    {
        coefficients[i] = getValidatedInput<double>("Coefficient for degree " + std::to_string(degree - i) + ": ");
    }

    double x = getValidatedInput<double>("Enter the value of x to evaluate the polynomial: ");
    double result = evaluatePolynomial(coefficients, x);
    std::cout << "The result of the polynomial evaluation is: " << result << "\n";
}

void displayMenu()
{
    std::cout << "\nChoose an equation to solve or perform an operation:\n";
    std::cout << "1. Solve a Linear Equation (ax + b = 0)\n";
    std::cout << "2. Solve a Quadratic Equation (ax^2 + bx + c = 0)\n";
    std::cout << "3. Evaluate a Polynomial\n";
    std::cout << "4. Exit\n";
}

int main()
{
    int choice;

    do
    {
        displayMenu();
        choice = getValidatedInput<int>("Enter your choice (1-4): ", true);

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
