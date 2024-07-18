/*ount of 3 Multiples
Write a program to find the count of 3 multiples in a given input integer array.
Include a function named divisibleBy3 that accepts 2 arguments and returns an int.
The first argument is the input array and the second argument is an int that corresponds to the size of
the array. The function returns an int that corresponds to the count of 3 multiples.
 
If the size of the array is negative or if any element in the array is negative, print “Invalid Input”
and terminate the program.
 
Input and Output Format:

Input consists of n+1 integers. The first integer corresponds to n, the number of elements in the array. The next 'n' integers correspond to the elements in the array.
Output consists of an integer that corresponds to the count of 3 multiples

Assume that the maximum number of elements in the array is 20. */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int n, i, count = 0;
    cout << "enter the size of the element : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            cout << "Invalid Input!" << endl;
            exit(0);
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    cout << "number of elements divisible by 3 are : " << endl;
    cout << count;
    return 0;
}
