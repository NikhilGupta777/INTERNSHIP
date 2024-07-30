// https://leetcode.com/problems/search-a-2d-matrix/

#include <iostream>
using namespace std;
int main()
{
    int element;

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    cout << "Ente r the element you want to be searched in 2d arrray : " << endl;
    cin >> element;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == element)
                cout << "\ntrue";

            else
                cout << "\nfalse";
        }
        cout << endl;
    }
    return 0;
}

// LEETCODE SOLUTION:

// class Solution
// {
// public:
//     bool searchMatrix(vector<vector<int>> &matrix, int target)
//     {
//         bool found = true;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 if (matrix[i][j] == target)
//                 {
//                     found = 1;
//                     cout << "true";
//                     return 0;
//                 }

//                 else
//                     found = 0;
//             }
//         }
//         if (found == 0)
//         {
//             cout << "false";
//         }
//     }
// };