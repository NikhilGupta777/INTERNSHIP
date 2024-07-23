#include <iostream>
using namespace std;
extern int globalVar;
class Auto
{
private:
    int xa;

public:
    Auto()
    {
        cout << "this is a constructor! " << endl;
    }

    void display()
    {
        globalVar++;
        cout << globalVar;
    }
};
int main()
{
    Auto a;
    a.display();
    return 0;
}
