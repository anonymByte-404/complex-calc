#ifndef EQUATION_SOLVER_H
#define EQUATION_SOLVER_H

#include "expression_parser.h"
#include <stdexcept>
#include <iostream>
#include <vector>

class EquationSolver
{
public:
  static double solveSimpleEquation(const std::vector<Token> &tokens);
};

#endif
