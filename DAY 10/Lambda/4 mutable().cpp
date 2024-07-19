#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    auto modifyX = [x]() mutable
    {
        x = 20; // this modifies the local copy of x, not the original one (x)
        cout << "Inside Lambda, x = " << x << endl;
    };
    modifyX();
    cout << "Outside the Lambda, x = " << x << endl;
    return 0;
}

