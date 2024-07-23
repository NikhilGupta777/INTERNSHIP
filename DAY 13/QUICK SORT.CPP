#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {8, 2, 3, 7, 1, 3, 9, 6, 5};
    int i, j;
    sort(arr.begin(), arr.end());                 // ascending quick sort
    sort(arr.begin(), arr.end(), greater<int>()); // decending quick sort

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
