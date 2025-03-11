#ifndef EXPRESSION_PARSER_H_
#define EXPRESSION_PARSER_H_

#include <cctype>
#include <string>
#include <vector>

struct Token
{
  enum Type
  {
    NUMBER,
    VARIABLE,
    OPERATOR,
    EQUALS
  };
  Type type;
  std::string value;
};

class ExpressionParser
{
public:
  static std::vector<Token> parse(const std::string &expression);
};

#endif