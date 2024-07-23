
#include <iostream>
using namespace std;
static int globalVar = 0;
class Static
{
private:
    int xa;

public:
    Static()
    {
        // cout << "this is a constructor! " << endl;
    }
    void demonstration()
    {

        static int count = 0;

        count++;

        cout << "Count: " << count << endl;
    }
    void demonstration2()
    {

        globalVar++;
        cout << globalVar;
    }
};
int main()
{
    Static a;
    a.demonstration();
    a.demonstration2();
    return 0;
}
