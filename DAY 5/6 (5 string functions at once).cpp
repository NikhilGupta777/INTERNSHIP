#include <iostream>
#include <string>
using namespace std;
int length(string str)
{
    return str.length();
}
int add(string str1, string str2)
{
    cout << str1 + str2;
}
void search(string str1, string str2)
{
    size_t found = str1.find(str2);
    if (!found)
    {
        cout << "\nnot found" << endl;
    }
    else
    {
        cout << "substr found at index: " << found << endl;
    }
}
void concat()
{
}
void comparison()
{
}
int main()
{
    int len;
    string str1 = "welcome to the miet";
    string str2 = "miet";

    cout << "length of the string: " << endl;
    cout << length(str1);

    cout << "append function: " << endl;
    cout << add(str1, str2);

    cout << "search function: " << endl;
    cout << search(str1, str2);

    

    return 0;
}

/*
    string str = "welcome to the miet";

    str.replace(3, 17, "abcd");
    cout << str;
    return 0;
*/