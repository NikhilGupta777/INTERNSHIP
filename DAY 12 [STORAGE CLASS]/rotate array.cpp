#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i, j;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size; i++)
    {
        int temp = arr[size - 1];

        for (int j = size - 1; j > 0; --j)
        {

            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
        cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    }

    return 0;
}
