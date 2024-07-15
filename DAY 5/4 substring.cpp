#include <iostream>
using namespace std;
int main()
{
    string str = "hello, world";
    string substr = "world";

    size_t found = str.find(substr);

    if (!found)
    {
        cout << "sub-string not found";
    }
    else
    {
        cout << "sub string found at pos : " << found << endl;
    }
    return 0;
}

