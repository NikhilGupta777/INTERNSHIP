/*
Problem: Matrix Diagonal Sum
Link: https://leetcode.com/problems/matrix-diagonal-sum/

Given a square matrix mat, return the sum of the matrix diagonals.
*/

#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size(), sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += mat[i][i];
        if (i != n - i - 1) {
            sum += mat[i][n - i - 1];
        }
    }
    return sum;
}