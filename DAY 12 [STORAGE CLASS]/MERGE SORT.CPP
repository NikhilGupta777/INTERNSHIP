// NOTE :  stable_sort uses merge sort under the hood

#include <iostream>
#include <vector>
#include <algorithm> // for stable_sort
using namespace std;
int main()
{
    vector<int> arr = {28, 37, 43, 3, 9, 82, 10};
    stable_sort(arr.begin(), arr.end()); // stable_sort uses merge sort under the hood

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}