#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;

    q.push("Ajab");
    q.push("gajab");
    q.push("sajab");

    int size = q.size();

    cout << "Size of the queue: " << size << endl;
    cout << "Before pop : " << q.front() << endl;
    q.pop();

    cout << "After pop: " << q.front() << endl;

    return 0;
}