#include "../../include/core/expression_parser.h"

std::vector<Token> ExpressionParser::parse(const std::string &expression)
{
  std::vector<Token> tokens;

  std::string temp;
  for (char c : expression)
  {
    if (std::isdigit(c) || c == '.')
      temp += c;
    else
    {
      if (!temp.empty())
      {
        tokens.push_back({Token::NUMBER, temp});
        temp.clear();
      }
      if (c == '+' || c == '-' || c == '*' || c == '/')
        tokens.push_back({Token::OPERATOR, std::string(1, c)});
      else if (std::isalpha(c))
        tokens.push_back({Token::VARIABLE, std::string(1, c)});
      else if (c == '=')
        tokens.push_back({Token::EQUALS, "="});
    }
  }

  if (!temp.empty())
    tokens.push_back({Token::NUMBER, temp});

  return tokens;
}
