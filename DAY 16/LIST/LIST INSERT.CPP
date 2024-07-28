// ITERATOR FUNCTION ITERATES THE ELEMENTS IN THE LIST
// WE CAN USE THE ITERATOR FUNCTION IN MANY WAYS GIVEN BELOW

// HERE WE USED INSERT FUNCTION

// IT INSERTS THE VALUE OF THE ELEMENT TO THE SPECIFIED LOCATION

// WE USED INSERT WITH ITERATOR

#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> number = {1, 2, 3, 4, 5};
    list<int>::iterator itr = number.begin();

    itr++;
    itr++;
    itr++;
    number.insert(itr, 0);

    for (auto i : number)
    {
        cout << i;
    }
    return 0;
}