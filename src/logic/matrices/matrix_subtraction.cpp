#include "../../../include/logic/matrices/matrix_subtraction.h"

std::vector<std::vector<int>> subtractMatrices(const std::vector<std::vector<int>> &A, const std::vector<std::vector<int>> &B)
{
  size_t rows{A.size()};
  size_t cols{A[0].size()};
  std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

  for (size_t i = 0; i < rows; ++i)
    for (size_t j = 0; j < cols; ++j)
      result[i][j] = A[i][j] - B[i][j];
  return result;
}