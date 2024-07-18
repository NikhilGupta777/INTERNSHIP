// In set the thing is that if you input same integers or elements more times then
// it does not count the repeated elements and only thakes it once
// also it automatically makes the set in the sorted manner!

#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> l;
    l.insert(5);
    l.insert(5);
    l.insert(5);
    l.insert(1);
    l.insert(6);
    l.insert(0);
    l.insert(0);

    for (auto i : l)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = l.begin();
    // it++;
    l.erase(it);

    for (auto i : l)
    {
        cout << i << endl;
    }

    cout << endl;

    // find the element is present i the set or not

    cout << "is present " << l.count(5) << endl;
    set<int>::iterator itr = l.find(5);

    for (auto it = itr; it != l.end(); it++)
    {
        cout << "it" << " "; // this is pointers
    }

    return 0;
}
