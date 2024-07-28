/*
Problem: Special Positions in a Binary Matrix
Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/

Find all special positions in the binary matrix.
*/

#include <vector>
using namespace std;

int numSpecial(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    vector<int> rowSum(m, 0), colSum(n, 0);
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }
    
    int count = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] == 1 && rowSum[i] == 1 && colSum[j] == 1) {
                count++;
            }
        }
    }
    return count;
}