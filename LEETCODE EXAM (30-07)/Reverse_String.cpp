#include <iostream>
#include <string>
using namespace std;
int main()
{
    int times;
    cout << "Enter the number of strings to be reversed: ";
    cin >> times;
    cin.ignore(); // To ignore the newline character after the integer input

    for (int j = 0; j < times; j++)
    {
        string test;
        cout << "Enter string " << j + 1 << ": ";
        getline(cin, test);

        for (int i = test.size() - 1; i >= 0; --i)
        {
            cout << test[i];
        }
        cout << endl; // Print a newline after each reversed string
    }

    return 0;
}

//LEETCODE SOLUTION:

/*class Solution
// {
// public:
//     std::string reverseString(std::string s)
//     {
//         std::string reversedStr;
//         for (int i = s.size() - 1; i >= 0; --i)
//         {
//             reversedStr += s[i];
//         }
//         return reversedStr;
//     }
// };*/