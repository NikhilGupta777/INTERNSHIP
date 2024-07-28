#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> number{0, 1, 2, 3, 4, 5, 3};
    list<int>::iterator itr = number.begin();

    // display the original list :
    cout << "\n\n";
    for (auto i : number)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    for (int i = 0; i < 3; i++)
    {
        cout << i << " ";
        ++itr;
    }
    cout << "\n"
         << *itr << " ";
    cout << "\n\n";

    // remove the 4th element :
    number.remove(*itr);
    cout << "\n\n";

    // display the modified list :
    for (auto i : number)
    {
        cout << i << "";
    }
    return 0;
}