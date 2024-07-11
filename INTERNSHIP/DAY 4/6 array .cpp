
#include <iostream>
using namespace std;
int main()
{
    int count = 0;

    int array[5];
    cout << "enter the values of the array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if ((array[i] + array[j] + array[k] == 7) && array[i] != array[i - 1] && array[j] != array[j - 1] && array[k] != array[k - 1])
                {
                    count++;
                    cout << array[i] << " " << array[j] << " " << array[k] << endl;
                }
            }
        }
    }
    cout;
    cout << "3 variables having sum (7) are: " << count;
    return 0;

    return 0;
}