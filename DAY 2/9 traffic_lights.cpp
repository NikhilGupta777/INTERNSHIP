#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
int main()
{
    _sleep(30);
    bool red_light{false};
    bool green_light{true};
    _sleep(10);
    if (red_light == true)
    {
        cout << "Stop" << endl;
    }
    else
    {
        cout << "Go through" << endl;
    }
    if (green_light)
    {
        cout << "the light is green!" << endl;
    }
    else
    {
        cout << "the light is ot green! " << endl;
    }
    // sizeof()
    cout << "sizeof(bool): " << sizeof(bool) << endl;

    // printing out a bool
    // 1 -->> true
    // 2 -->> false

    cout << endl;
    cout << "red_light: " << red_light << endl;
    cout << "green_light" << green_light << endl;
    cout << boolalpha;
    cout << "red_light" << red_light << endl;
    cout << "green_light" << green_light << endl;
    return 0;
}