#include <iostream>

#include <deque>

using namespace std;

int main()
{

    // deque means you can perform push and pop operation from both end.

    deque<int> d;
    int j;
    // insertion
    d.push_back(10);
    d.push_front(11);
    cout << " INSERTION \n\n"
         << endl;
    for (int i : d)
    {
        cout << 1 << " ";
    }
    // delete

    d.pop_back();
    cout << "     \n   POP BACK\n\n"
         << endl;
    for (int i : d)
    {

        cout << 1 << " ";
    }

    // delete from front
    d.pop_front();
    cout << "   \n    DELETE FRONT\n\n\n";
    for (int i : d)
    {

        cout << i << " ";
    }
    cout << endl;
    cout << "front " << d.front() << endl;

    cout << "back" << d.back() << endl;
    cout << "empty or not" << d.empty() << endl;
    cout << "before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase: " << d.size() << endl;

    return 0;
}
