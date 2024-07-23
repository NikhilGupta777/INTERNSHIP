#include <iostream>
#include "myheader.h"
// int add(int a, int b);
// int sub(int x, int y);
using namespace std;
void Functions::input()
{
    int a, b;
    cout << "\nEnter value of A & B : " << endl;
    cin >> a >> b;
}
void Functions::show()
{
    int a, b;
    cout << "\nValues of A & B : " << a << " " << b << endl
         << endl;
}
int main()
{
    Functions a;
    a.input();
    a.show();
    return 0;
}
