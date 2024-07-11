#include <iostream>

using namespace std;
int main()
{
    int array[5] = {10, 5, 30, 60, 50};

    int sum = 0;

    // finding sum of elements in the array:

    for (auto x : array) // auto automatically assigns the datatype to the variable which you are using
    {
        sum += x;
    }
    cout << "sum is: " << sum;

    int max = -32678;
    for (auto temp : array)
    {
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << "Max element is: " << max;
    return 0;
}
