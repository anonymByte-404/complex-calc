#include "../include/main.h"
#include <iostream>
#include <vector>

int main()
{
    int choice;
    std::cout << "Select an operation:" << std::endl;
    std::cout << "1. Matrix Addition" << std::endl;
    std::cout << "2. Matrix Subtraction" << std::endl;
    std::cout << "3. Solve Linear Equation (ax + b = 0)" << std::endl;
    std::cout << "4. Solve Quadratic Equation (ax^2 + bx + c = 0)" << std::endl;
    std::cout << "5. Solve Cubic Equation (ax^3 + bx^2 + cx + d = 0)" << std::endl;
    std::cout << "6. Solve Quartic Equation (ax^4 + bx^3 + cx^2 + dx + e = 0)" << std::endl;
    std::cout << "7. Solve Quintic Equation (ax^5 + bx^4 + cx^3 + dx^2 + ex + f = 0)" << std::endl;
    std::cout << "8. Solve Sextic Equation (ax^6 + bx^5 + cx^4 + dx^3 + ex^2 + fx + g = 0)" << std::endl;
    std::cout << "9. Solve Septic Equation (ax^7 + bx^6 + cx^5 + dx^4 + ex^3 + fx^2 + gx + h = 0)" << std::endl;
    std::cout << "10. Solve Octic Equation (ax^8 + bx^7 + cx^6 + dx^5 + ex^4 + fx^3 + gx^2 + hx + i = 0)" << std::endl;
    std::cout << "11. Exit" << std::endl;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        std::vector<std::vector<int>> A = {{1, 2}, {3, 4}};
        std::vector<std::vector<int>> B = {{5, 6}, {7, 8}};
        std::vector<std::vector<int>> result = addMatrices(A, B);
        std::cout << "Result of matrix addition:" << std::endl;
        printMatrix(result);
        break;
    }
    case 2:
    {
        std::vector<std::vector<int>> A = {{1, 2}, {3, 4}};
        std::vector<std::vector<int>> B = {{5, 6}, {7, 8}};
        std::vector<std::vector<int>> result = subtractMatrices(A, B);
        std::cout << "Result of matrix subtraction:" << std::endl;
        printMatrix(result);
        break;
    }
    case 3:
    {
        double a, b;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        double root = solveLinearEquation(a, b, 0, 0);
        if (!std::isnan(root))
        {
            std::cout << "Root: " << root << std::endl;
        }
        break;
    }
    case 4:
    {
        double a, b, c;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        solveQuadraticEquation(a, b, c);
        break;
    }
    case 5:
    {
        double a, b, c, d;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        solveCubicEquation(a, b, c, d);
        break;
    }
    case 6:
    {
        double a, b, c, d, e;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        std::cout << "Enter coefficient e: ";
        std::cin >> e;
        solveQuarticEquation(a, b, c, d, e);
        break;
    }
    case 7:
    {
        double a, b, c, d, e, f;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        std::cout << "Enter coefficient e: ";
        std::cin >> e;
        std::cout << "Enter coefficient f: ";
        std::cin >> f;
        double initialGuess;
        std::cout << "Enter an initial guess for the root: ";
        std::cin >> initialGuess;
        double root = newtonRaphsonQuintic(a, b, c, d, e, f, initialGuess);
        if (!std::isnan(root))
        {
            std::cout << "Approximated real root: " << root << std::endl;
        }
        break;
    }
    case 8:
    {
        double a, b, c, d, e, f, g;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        std::cout << "Enter coefficient e: ";
        std::cin >> e;
        std::cout << "Enter coefficient f: ";
        std::cin >> f;
        std::cout << "Enter coefficient g: ";
        std::cin >> g;
        double initialGuess;
        std::cout << "Enter an initial guess for the root: ";
        std::cin >> initialGuess;
        double root = newtonRaphsonSextic(a, b, c, d, e, f, g, initialGuess);
        if (!std::isnan(root))
        {
            std::cout << "Approximated real root: " << root << std::endl;
        }
        break;
    }
    case 9:
    {
        double a, b, c, d, e, f, g, h;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        std::cout << "Enter coefficient e: ";
        std::cin >> e;
        std::cout << "Enter coefficient f: ";
        std::cin >> f;
        std::cout << "Enter coefficient g: ";
        std::cin >> g;
        std::cout << "Enter coefficient h: ";
        std::cin >> h;
        double initialGuess;
        std::cout << "Enter an initial guess for the root: ";
        std::cin >> initialGuess;
        double root = newtonRaphsonSeptic(a, b, c, d, e, f, g, h, initialGuess);
        if (!std::isnan(root))
        {
            std::cout << "Approximated real root: " << root << std::endl;
        }
        break;
    }
    case 10:
    {
        double a, b, c, d, e, f, g, h, i;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
        std::cout << "Enter coefficient d: ";
        std::cin >> d;
        std::cout << "Enter coefficient e: ";
        std::cin >> e;
        std::cout << "Enter coefficient f: ";
        std::cin >> f;
        std::cout << "Enter coefficient g: ";
        std::cin >> g;
        std::cout << "Enter coefficient h: ";
        std::cin >> h;
        std::cout << "Enter coefficient i: ";
        std::cin >> i;
        double initialGuess;
        std::cout << "Enter an initial guess for the root: ";
        std::cin >> initialGuess;
        double root = newtonRaphsonOctic(a, b, c, d, e, f, g, h, i, initialGuess);
        if (!std::isnan(root))
        {
            std::cout << "Approximated real root: " << root << std::endl;
        }
        break;
    }
    case 11:
    {
        std::cout << "Exiting..." << std::endl;
        break;
    }
    default:
        std::cout << "Invalid choice." << std::endl;
        break;
    }

    return 0;
}