/*1) A student will not be allowed to sit in exam if his/her attendence is less

than 75%.

Take following input from user:

 Number of classes held

 Number of classes attended.

And print:

 percentage of class attended

 Is student is allowed to sit in exam or not.

*/



#include <iostream>

using namespace std;
int main()
{
    float held, attended;
    cin >> held >> attended;
    if (attended > held)
    {
        cout << "Attended class can't be greater than held classes!" << endl;
        exit(0);
    }
    float percentage = (attended / held) * 100;
    cout << percentage << endl;
    if (percentage > 75)
    {
        cout << "allowed to sit in class" << endl;
    }
    else
    {
        cout << "not allowed!" << endl;
    }
    return 0;
}