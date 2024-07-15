#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;
    int n = sizeof(arr);
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to be deleted" << endl;
    int elm;
    cin >> elm;
    // int newelm;
    // cout << "enter the new element :" << endl;
    // cin >> newelm;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == elm)
        {
            break;
        }
    }
    for (int j = i; j < sizeof(arr - 1); j++)
    {
        arr[i] = arr[i + 1];
    }
    --n;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}