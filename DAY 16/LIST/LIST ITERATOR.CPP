#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{

    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
    // create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();

    // ++itr;
    // numbers.insert(itr, 0);
    // increment itr to point to the second element
    // ++itr;
    // // display the 2nd element
    // cout << "second element : " << *itr << endl;
    // // increment itr to point to 4th element
    // ++itr;
    // ++itr;
    //     iterator itr = numbers.begin();
    // // display the 4th element

    // cout << "4th element : " << *itr;
    // printing elements of the list by iterating the itr only once
    for (itr = itr; itr != numbers.end(); ++itr)
    {
        // if (itr==)
        cout << *itr << " ";
    }

    cout << "wdfhds" << endl;

    for (auto i = 0; i < 4; i++)
    {
        if (i == 0 || i == 2)
        {
            cout << *itr;
        }
        itr++;
    }

    return 0;
}
