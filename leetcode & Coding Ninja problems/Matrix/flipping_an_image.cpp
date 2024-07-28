/*
Problem: Flipping an Image
Link: https://leetcode.com/problems/flipping-an-image/

Given an n x n binary matrix image, flip the image horizontally, then invert it.
*/

#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
        reverse(row.begin(), row.end());
        for (auto& pixel : row) {
            pixel ^= 1;
        }
    }
    return image;
}