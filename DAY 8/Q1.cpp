// 1)Write a program to display the array element.

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
        cout << arr[i];
    }
    return 0;
}