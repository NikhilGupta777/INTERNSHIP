#include <iostream>
#include <string>
using namespace std;
class Person
{
    char name[20]; // data member
    int id;

public:
    void getDetail(int i) // member function/function
    {
        cout << "detail is as follows : " << i << endl;
    }
};

int main()
{
    Person p1;
    p1.getDetail(1);
}