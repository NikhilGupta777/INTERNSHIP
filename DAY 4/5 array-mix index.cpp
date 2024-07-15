#include <iostream>
using namespace std;
int main()
{
    int count = 0;

    int array[5] = {1, 4, 2, 3, 8};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if ((array[i] + array[j] == 5))
            {
                count++;
            }
        }
    }
    cout;
    cout << "Pairs having sum (5) are: " << count;
    return 0;
}