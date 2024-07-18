// 2)write a progam to find the  max element from the list

#include <iostream>
using namespace std;
int main()
{
    int arr[5], i, max = 0;
    cout << "enter any five elements for the array : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            max = arr[i];
        }
    }
    cout << "Max element in array is : " << max << endl;

    return 0;
}