#include <iostream>
using namespace std;
int main()
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // int bad_initialization (doesnot_exist3 + doesnot_exist4);

    // information lost. Less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    cout << "apple_count: " << apple_count << endl;
    cout << "orange_count: " << orange_count << endl;
    cout << "Fruit count: " << fruit_count << endl;
    cout << "narrowing_conversion_functional" << narrowing_conversion_functional << endl;
    return 0;
}