#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> number;

    cout << "ENTER THE SIZE OF THE LiST : " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        number.push_back(x);
    }

    if (number.empty())
    {
        number.push_front(10);
    }
    else
        number.push_back(10);

    for (auto i : number)
    {
        cout << i << " ";
    }

    cout << "add position : " << endl;
    int pos;
    cin >> pos;

    number.insert(2, 10);
}
