#include <iostream>
using namespace std;
class Register
{
private:
    int xa;

public:
    Register()
    {
        // cout << "this is a constructor! " << endl;
    }
    void demonstration()
    {

        register int counter = 0;
        for (register int i = 0; i < 10; ++i)
        {
            counter += i;
        }
        cout << counter;
    }
    void display()
    {
        // cout << counter;
    }
};
int main()
{
    Register a;
    a.demonstration();
    a.display();
    return 0;
}
