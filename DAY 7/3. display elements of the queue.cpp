#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    queue<string> s;
    int i;
    queue<string> temp;
    s.push("Ajay");
    s.push("Ajab");
    s.push("gajab");
    s.push("sajab");
    // cout << "before push  top: " << s.front() << endl;

    // s.push("hello");

    // cout << "After : " << s.front() << endl;

    // s.pop();
    // cout << "After pop: " << s.front() << endl;
    // s.pop();

    // cout << "Again after pop: " << s.front() << endl;

    cout << "displaying al the data in queue: " << endl;

    while (!s.empty())
    {
        string item = s.front();
        cout << item << endl;
        s.pop();
        temp.push(item);
    }

    while (!temp.empty())
    {
        string item = temp.front();
        temp.pop();
        s.push(item);
    }
    return 0;
}