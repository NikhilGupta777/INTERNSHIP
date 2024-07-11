#include <iostream>
using namespace std;
int main()
{
    int array[5] = {10, 5, 30, 60, 50};
    int user_input;
    cout << "enter the number you want to search for in the array: ";
    cin >> user_input;
    int counter = 0;
    for (auto x : array)
    {
        if (x == user_input)
        {
            cout << "the number " << user_input << " is at index " << counter << endl;
            exit(0);
        }
        counter++;
    }
    cout << "not found!";
    return 0;
}