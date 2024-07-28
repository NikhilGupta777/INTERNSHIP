/*
Problem: Richest Customer Wealth
Link: https://leetcode.com/problems/richest-customer-wealth/

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. Return the wealth that the richest customer has.
*/

#include <vector>
#include <algorithm>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    for (const auto& customer : accounts) {
        int wealth = accumulate(customer.begin(), customer.end(), 0);
        maxWealth = max(maxWealth, wealth);
    }
    return maxWealth;
}