// 1.TWO NUMBERS

// Ram and Mohan are two brothers. They are not good in maths. So their father decided to give some assignment as
//  a game so that they can enjoy as well as they can learn the concept of number systems. So he gave two numbers to them.
//  One is the sum of two numbers, x and y, and another is the product of same two numbers. Help them to write a code to find x and y.

// Note:

// The two numbers should be printed in ascending order.

// Input format:

// The input contains two integers in the same line separated by space, that denotes the sum of x and y and the product of x and y, respectively.

// Output format:

// The output consists of two numbers separated by space which corresponds to x and y in ascending order.

// Sample Input 1:

// 5 6

// Sample Output 1:

// 2 3

// Sample Input 2:

// 15 50

// Sample Output 2:

// 5 10

#include <iostream>
using namespace std;

int main()
{
    int sum, mul;
    cin >> sum >> mul;

    int x, y;

    // Find x and y such that x + y = sum and x * y = mul
    // We can iterate through possible values of x and check if they satisfy the conditions

    for (x = 1; x <= sum; ++x)
    {
        if (mul % x == 0)
        { // y should be an integer
            y = mul / x;
            if (x + y == sum)
            {
                break; // Found x and y
            }
        }
    }

    // Output x and y in ascending order
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    cout << x << " " << y << endl;

    return 0;
}
