// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     int arr[] = {7, 1, 5, 3, 6, 4}, i, j;
//     int min = arr[0], profit = 0, profit1 = 0;

//     for (i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         profit1 = arr[i] - min;
//         if (profit1 > profit)
//         {
//             profit = profit1;
//         }
//     }
//     cout << profit;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int nums[4];
    int target1 = 9;
    int i, j, zero, one;
    for (i = 1; i < 5; i++)
    {
        cin >> nums[i];
    }

    for (i = 1; i < 5; i++)
    {
        if (((nums[i] + nums[i - 1]) == target1) && (nums[i - 1] != nums[i - 2]))
        {
            cout << (i - 1) << " " << i << endl;
        }
    }

    return 0;
}