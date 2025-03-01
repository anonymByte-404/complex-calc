#ifndef MATRIX_SUBTRACTION_H_
#define MATRIX_SUBTRACTION_H_

#include <iostream>
#include <vector>
#include "./matrix_utils.h"

void printMatrix(const std::vector<std::vector<int>> &matrix);
std::vector<std::vector<int>> subtractMatrices(const std::vector<std::vector<int>> &A, const std::vector<std::vector<int>> &B);

#endif