// HOW CAN WE REMOVE THE ELEMENTS FROM A LIST :
// THERE ARE TWO WAYE 1. BY VALUE 2. BY ITERATOR

// THIS IS BY VALUE:

#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int main()
{
    list<int> number = {1, 2, 1, 3, 4, 1, -1};

    // REMOVE FUNCTION
    // IT REMOVES ANY ELEMENT WITH VALUE 1:
    // number.remove(1);
    // for (auto i : number)
    // {
    //     cout << i << " ";
    // }
    list<int>::iterator itr = number.begin();

    cout << "enter the pos : " << endl;
    int pos;
    cin >> pos;

    for (int i = 0; i < pos; i++)
    {
        itr++;
    }
    
    number.pop_back();

    number.remove(*itr);

    for (int i : number)
    {
        cout << i << " ";
    }

    return 0;
}
