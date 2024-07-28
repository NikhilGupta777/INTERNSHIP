// number.front();
// number.back();
// number.empty();
// number.clear();
// number.reverse();
// number.sort();
// number.push_front();
// number.push_back();
// number.pop_front();
// number.pop_back();
// number.unique();
// number.rbegin();
// number.rend();
// number.size();
// number.merge();

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> number = {1, 2, 3, 4, 5};

    for (auto i : number)
    {
        cout << i << " ";
    }
    // using push to push at front and end
    number.push_back(9);
    number.push_front(10);
    // displaying the list
    cout << "\nnew list : " << endl;
    for (auto i : number)
    {
        cout << i << " ";
    }
    // using pop function to remove from front and end
    number.pop_back();
    number.pop_front();
    // displaying the list
    cout << "\nnew list : " << endl;
    for (auto i : number)
    {
        cout << i << " ";
    }
    // Displaying element at front and end individually
    cout << "\nElement at front : " << number.front();
    cout << "\nElement at front : " << number.back();

    cout << "\nreverse list : " << endl;
    // Reversing the list
    number.reverse();
    for (auto i : number)
    {
        cout << i << " ";
    }
    // Pushing 11 and 2 to back
    cout << "\nAdding 1,2" << endl;
    number.push_back(1);
    number.push_back(2);

    cout << "\nnew list : " << endl;

    for (auto i : number)
    {
        cout << i << " ";
    }
    // Removing duplicate elements from list
    cout << "\nAfter removing consecutive duplicate elements : " << endl;
    for (int i = 0; i < number.size(); i++)
    {
        number.unique();
    }
    number.unique();
    for (auto i : number)
    {
        cout << i << " ";
    }

    cout << "\nIs list empty? : " << number.empty();

    cout << "\nSize of the list : " << number.size();

    cout << "\n\n[Clearing the whole list]" << endl;
    number.clear();

    cout << "\nList after clear : " << endl;

    for (auto i : number)
    {
        cout << i << " ";
    }
    return 0;
}
