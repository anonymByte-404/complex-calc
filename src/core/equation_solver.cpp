#include "../../include/core/equation_solver.h"

double EquationSolver::solveSimpleEquation(const std::vector<Token> &tokens)
{
  double lhs{}, rhs{};
  char operation{'+'};
  bool isLHS{true};

  for (const Token &token : tokens)
  {
    if (token.type == Token::NUMBER)
    {
      double num = std::stod(token.value);
      if (isLHS)
      {
        if (operation == '+')
          lhs += num;
        else if (operation == '-')
          lhs -= num;
      }
      else
      {
        if (operation == '+')
          rhs += num;
        else if (operation == '-')
          rhs -= num;
      }
    }
    else if (token.type == Token::OPERATOR)
      operation = token.value[0];
    else if (token.type == Token::EQUALS)
    {
      isLHS = false;
      operation = '+';
    }
  }

  return lhs - rhs;
}
