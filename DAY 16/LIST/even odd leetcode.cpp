#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> number = {1, 2, 3, 4, 5};
    list<int> number1;
    list<int> mergefirst;
    cout << "enter the size f the list : " << endl;

    // int size;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     int x;
    //     cin >> x;
    //     number.push_back(x);
    // }
    // list<int>::iterator itr = number.begin();
    int i = 0;
    for (auto m : number)
    {
        if (i % 2 == 0)
        {
            number1.push_back(m);
        }
        else
            mergefirst.push_front(m);
        i++;
    }

    // for (itr = itr; itr != number.end(); ++itr)
    // {

    // }
    mergefirst.merge(number1);
    for (int i : mergefirst)
    {
        cout << i << " ";
    }
    return 0;
}