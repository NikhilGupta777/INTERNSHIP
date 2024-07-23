#include <iostream>
using namespace std;
int globalVar = 0;

class Auto
{
private:
    int xa;

public:
    Auto()
    {
        cout << "this is a constructor! " << endl;
    }
    void demonstration(auto x)
    {
        xa = x;
    }
    void display()
    {
        cout << xa;
    }
};
int main()
{
    Auto a;
    a.demonstration(12);
    a.display();
    return 0;
}
