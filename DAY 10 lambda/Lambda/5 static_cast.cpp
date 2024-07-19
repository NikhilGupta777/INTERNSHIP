#include <iostream>
using namespace std;
int main()
{
    auto divide = [](int a, int b) -> double
    {
        if (b == 0)
        {
            return 0;
        }
        return static_cast<double>(a) / b;
    };
    cout << "Divsion result : " << divide(10, 2) << endl;
    cout << "Division By Zero Result : " << divide(10, 0) << endl;
    return 0;
}