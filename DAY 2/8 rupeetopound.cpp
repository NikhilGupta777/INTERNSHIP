#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter ammount inr: " << endl;
    cin >> a;
    int conv = a / 106.9174;
    cout << "the converted value to pound is: " << conv;
    return 0;
}