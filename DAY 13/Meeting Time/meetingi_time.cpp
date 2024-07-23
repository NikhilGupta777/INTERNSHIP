#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[2][2];
    int meetings;
    cout << "how many meetings : " << endl;
    cin >> meetings;
    cout << "enter the timings of the meetings : \n\n"
         << endl;
    for (int i = 0; i < meetings; i++)
    {
        cout << "\nMeeting :" << i + 1 << endl
             << endl;
        cout << "Start : ";
        cin >> arr[i][0];
        cout << "End : ";
        cin >> arr[i][1];
    }
    cout << "The timings of the meetings : " << endl;
    // int temp;
    bool temp = true;
    for (int i = 0; i < meetings - 1; i++)
    {
        for (int j = i + 1; j < meetings; j++)
        {

            if (arr[i][1] > arr[j][0] && arr[i][0] < arr[j][1])
            {
                temp = false;
                break;
            }
        }
        if (!temp)
        {
            break;
        }
    }

    if (temp)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
