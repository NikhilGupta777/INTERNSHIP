#include <iostream>
using namespace std;
class Mutable
{
private:
    mutable int value;

public:
    Mutable()
    {
    }
    Mutable(int val) : value(val) {}

    void modify() const { value++; }
    void display()
    {
        cout << value;
    }
};
int main()
{
    Mutable a;
    a.display();
    return 0;
}
