// #include <iostream>
// using namespace std;
// int main()
// {

//     int sizei, sizej;
//     cout << "enter the size of the array [i][j] : ";
//     cin >> sizei >> sizej;
//     int arr[sizei][sizej];

//     cout << "enter the array elements : " << endl;

//     for (int i = 0; i < sizei; i++)
//     {
//         for (int j = 0; j < sizej; j++)
//         {
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
//     int sum = 0;
//     int sum1 = 0;
//     // sum of a diagonal of array

//     for (int i = 0; i < sizei; i++)
//     {
//         for (int j = 0; j < sizej; j++)
//         {

//             if (i == j)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }

//     for (int i = sizei - 1; i > 0; --i)
//     {
//         for (int j = sizej - 1; j > 0; --j)
//         {

//             if (i == j)
//             {
//                 // if ()
//                 sum1 += arr[i][j];
//             }
//         }
//     }

//     cout << sum << endl;
//     cout << sum1 << endl;
//     cout << sum + sum1 << endl;
//     cout << (sizei) / 2;
//     int abc = (sizei) / 2;

//     cout << "\n"
//          << (sum + sum1) - (arr[abc][abc]);

//     // for (int i = 0; i < sizei; i++)
//     // {
//     //     for (int j = 0; j < sizej; j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     return 0;
// }