#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int output = 0;
    string jewels;
    cout << "enter the type of jewels you have : " << endl;
    cin >> jewels;

    string stones = "aAAbbbb";

    int size = stones.size();
    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
            {
                output++;
            }
        }
    }
    cout << endl
         << output;
    return 0;
}
