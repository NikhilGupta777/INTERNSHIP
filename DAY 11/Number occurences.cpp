#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s0 = "jhon12Doe14gmail18.com8";
    string s1 = s0;
    int count = 0;

    sort(s1.begin(), s1.end());

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            cout << "Duplicate Element : " << s1[i] << endl;
            count++;
        }
        if (isalpha(s1[i]))
        {
            break;
        }
    }
    cout << "total duplicate numbers : " << count << endl;
    return 0;+-
}
