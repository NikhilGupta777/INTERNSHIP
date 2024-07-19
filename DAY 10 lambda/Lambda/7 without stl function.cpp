#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 3, 2, 5, 6};

    for (int i : numbers)
    {
        cout << i;
    }
    return 0;
}