/*
Problem: Buildings Projection
Link: https://www.codingninjas.com/codestudio/problems/buildings-projection_1466964

Given the coordinates of buildings in a 2D grid, find the skyline projection.
*/

#include <vector>
using namespace std;

vector<int> projection(vector<vector<int>>& grid) {
    vector<int> result(grid.size(), 0);
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            result[i] = max(result[i], grid[i][j]);
        }
    }
    return result;
}