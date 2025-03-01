#ifndef MATRIX_ADDITION_H_
#define MATRIX_ADDITION_H_

#include <iostream>
#include <vector>
#include "./matrix_utils.h"

void printMatrix(const std::vector<std::vector<int>> &matrix);
std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>> &A, const std::vector<std::vector<int>> &B);

#endif