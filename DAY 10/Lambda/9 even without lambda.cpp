#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main()
{
    vector<int> numbers = {1, 3, 5, 8, 10, 13};
    // Using find_if with a lambda to find the first even number

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << "First even number found! " << numbers[i] << endl;
            exit(0);
        }
    }
    cout << "No even number found " << endl;

    return 0;
}