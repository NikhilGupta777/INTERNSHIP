#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary; // data hiding
public:
    string name;
    string dept;
    string subject;
    Teacher()
    {
        cout << "constructor is calling " << endl;
    }
    Teacher(string s, string d, string sub, double sal)
    {
        name = s;
        dept = d;
        subject = sub;
        salary = sal; // 50000000000...
    }
    // Teacher(string s, string d, string sub, double sal)
    // {
    //     this->name = s;
    //     this->dept = d;
    //     this->subject = sub;
    //     this->salary = sal; // 50000000000...
    // }
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(int salary1)
    {
        cout << "\nPrevious salary : " << salary << endl; // 500000000000000...
        salary = salary1;                                 // 4500
    }

    void getSalary()
    {

        // cout << "updated salary : " << salary << endl;//4500

        cout << "The salary is : " << salary << endl
             << endl; // 4500
    }
    void getInfo()
    {
        cout << "Teacher Name : " << name << endl;
        cout << "Teacher Subject : " << subject << endl;
        cout << "Teacher Department : " << dept << endl;
        cout << "Teacher Salary : " << salary << endl
             << endl;
    }
};
int main()
{
    Teacher t1("nikhil", "cse", "c++", 5000000000);
    t1.name = "Sarang";
    t1.subject = "Math";
    t1.changeDept("CSE");
    // cout << t1.name << endl;
    t1.setSalary(4500);
    t1.getSalary();
    // Teacher t1("nikhil", "cse", "c++", 5000000000);
    t1.getInfo();
    return 0;
}