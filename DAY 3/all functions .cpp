#include <iostream>
using namespace std;

// Function to add two numbers
void add(int x, int y)
{
    cout << "Addition: " << x << " + " << y << " = " << (x + y) << endl;
}
void add(int x, int y, int z)
{
    cout << "Addition: " << x << " + " << y << " + " << z << " = " << (x + y + z) << endl;
}
// Function to subtract two numbers
void sub(int x, int y)
{
    cout << "Subtraction: " << x << " - " << y << " = " << (x - y) << endl;
}

// Function to divide two numbers (handles division by zero)
void intdiv(int x, int y)
{
    if (y != 0)
    {
        cout << "Division: " << x << " / " << y << " = " << (x / y) << endl;
    }
    else
    {
        cout << "Division by zero error" << endl;
    }
}

// Function to multiply two numbers
void mul(int x, int y)
{
    cout << "Multiplication: " << x << " * " << y << " = " << (x * y) << endl;
}

// Function to find remainder of division
void rem(int x, int y)
{
    if (y != 0)
    {
        cout << "Remainder: " << x << " % " << y << " = " << (x % y) << endl;
    }
    else
    {
        cout << "Division by zero error" << endl;
    }
}

int main()
{
    int a, b, c;

    // Input values
    cout << "Enter the value of a and b and c: ";
    cin >> a >> b >> c;

    // Call each function with arguments a and b
    add(a, b);
    add(a, b, c);
    sub(a, b);
    intdiv(a, b);
    mul(a, b);
    rem(a, b);

    return 0;
}


// function overloading:

/*
function overloading is a method in which we redue the number of functions and use only one function 
instead we use only one function of which the size of the paramerers can be different but the name of the fnction eill
be same 
*/

// :jhgsdfj

/**/

// :

/**/

// :

/**/