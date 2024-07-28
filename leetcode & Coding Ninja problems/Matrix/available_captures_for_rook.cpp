/*
Problem: Available Captures for Rook
Link: https://leetcode.com/problems/available-captures-for-rook/

Given an 8x8 board, return the number of available captures for the rook.
*/

#include <vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int rookX = 0, rookY = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == 'R') {
                rookX = i;
                rookY = j;
                break;
            }
        }
    }
    
    int captures = 0;
    for (int i = rookX - 1; i >= 0; --i) {
        if (board[i][rookY] == 'B') break;
        if (board[i][rookY] == 'p') {
            captures++;
            break;
        }
    }
    for (int i = rookX + 1; i < 8; ++i) {
        if (board[i][rookY] == 'B') break;
        if (board[i][rookY] == 'p') {
            captures++;
            break;
        }
    }
    for (int j = rookY - 1; j >= 0; --j) {
        if (board[rookX][j] == 'B') break;
        if (board[rookX][j] == 'p') {
            captures++;
            break;
        }
    }
    for (int j = rookY + 1; j < 8; ++j) {
        if (board[rookX][j] == 'B') break;
        if (board[rookX][j] == 'p') {
            captures++;
            break;
        }
    }
    return captures;
}