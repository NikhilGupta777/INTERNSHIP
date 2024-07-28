/*
Problem: Lucky Numbers in a Matrix
Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Find all lucky numbers in the matrix.
*/

#include <vector>
#include <algorithm>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> result;
    for (int i = 0; i < matrix.size(); ++i) {
        int minElement = *min_element(matrix[i].begin(), matrix[i].end());
        int colIdx = find(matrix[i].begin(), matrix[i].end(), minElement) - matrix[i].begin();
        bool isLucky = true;
        for (int j = 0; j < matrix.size(); ++j) {
            if (matrix[j][colIdx] > minElement) {
                isLucky = false;
                break;
            }
        }
        if (isLucky) {
            result.push_back(minElement);
        }
    }
    return result;
}