#include <iostream>
using namespace std;
int main()
{
    // rectangle
    int i;
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << "$%";
            }

            cout << "#*";
        }
        cout << "" << endl;
    }
    return 0;
}