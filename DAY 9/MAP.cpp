// Map stores the data in form of key and a value
// to access the key and value
// we use i.first and i.second
// -----------
// To find an element in the map we use "m.count(element key)" to count the number of times the element occoured
// and to erase or delete an element we use m.erase(element key)

#include <iostream>
#include <map>
using namespace std;
// stored the data in key value pair
int main()
{
    map<int, string> m;
    // 1 is key and ajay is the value
    m[1] = "Ajay";
    m[2] = "Nanjay";
    m[4] = "Manjay";

    m.insert(make_pair(5, "antika"));
    for (auto i : m)
    {
        // expression cant be used as a function.
        // i.first() dont write this way
        cout << i.first << " " << i.second << " " << endl;
    }

    cout << "find the element : " << m.count(-13) << endl;

    m.erase(5);
    cout << "after erase " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl
             << endl;
    }

    // find the element from map
    int elm;
    cout << "finding element enter the element to find : " << endl;
    cin >> elm;
    auto findElement = m.find(elm);
    for (auto i = findElement; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}