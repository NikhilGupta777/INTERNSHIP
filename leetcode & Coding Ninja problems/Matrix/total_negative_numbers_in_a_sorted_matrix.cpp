/*
Problem: Total Negative Numbers in a Sorted Matrix
Link: https://www.codingninjas.com/codestudio/problems/total-negative-numbers-in-a-sorted-matrix_3161878

Count the number of negative numbers in a sorted matrix.
*/

#include <vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int count = 0;
    for (const auto& row : grid) {
        for (const auto& num : row) {
            if (num < 0) {
                ++count;
            }
        }
    }
    return count;
}