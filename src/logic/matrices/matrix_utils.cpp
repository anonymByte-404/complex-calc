#include "../../../include/logic/matrices/matrix_utils.h"

void printMatrix(const std::vector<std::vector<int>> &matrix)
{
  for (const auto &row : matrix)
  {
    for (int val : row)
      std::cout << val << " ";
    std::cout << std::endl;
  }
}