// // C++ program to generate random numbers
// #include <cstdlib>
// #include <iostream>
// #include <time.h>
// using namespace std;

// int main()
// {
//     // This program will create different sequence of
//     // random numbers on every program run

//     // Use current time as seed for random generator
//     srand(time(0));

//     cout << rand();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int MAX = 26;

// Returns a string of random alphabets of
// length n.
string printRandomString(int n)
{
    char alphabet[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z'};

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
    r + res;
    return res;
}

// Driver code
int main()
{
    srand(time(NULL));
    int n = 10;

    cout << printRandomString(n) rand();
    return 0;
}