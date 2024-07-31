#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1; // Best case : 0!=1!=1
    }
    else
        return n * factorial(n - 1); // recursive case
}

int main()
{
    double number;
    // input a number from the user
    cout << "enter a non negetive integer : " << endl;
    cin >> number;

    if (number < 0)
    {
        cout << "factorial is not defined for 0 and negetive numbers!" << endl;
    }
    else
    {
        // calculte and print the factorial
        double result = factorial(number);
        cout << "factorial of " << number << " is " << result << endl;
    }
    return 0;
}