// #include <array>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int minSoFar = prices[0];

//     int ans = 0;
//     for (int i = 1; i < prices.size(); i++)
//     {
//         int profit = prices[i] - minSoFar;
//         if (profit > ans)
//         {
//             ans = profit;
//         }
//         minSoFar = min(prices[i], minSoFar);
//     }
// }

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(12);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    l.erase(l.begin());
    cout << "after erase : " << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "size of the list : " << l.size() << endl;
    return 0;
}