#include <iostream>
using namespace std;

int main()
{

    int size, i, j;

    cout << "enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "enter the elements of the array: " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}