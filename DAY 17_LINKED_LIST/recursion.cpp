#include <bits/stdc++.h>
using namespace std;
int rsum(int n);
int main()
{

    int num, sum;

    cout << "Enter a number";

    cin >> num;
    sum = rsum(num);

    cout
        << sum;
}

int rsum(int num)
{

    int d;
    int s;
    if (num != 0)
    {

        d = num % 10;
        num = num / 10;
        s = d + rsum(num);
    }
    else
        return (0);

    return (s);
}