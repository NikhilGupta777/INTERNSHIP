#include <iostream>
#include <cstdlib>
using namespace std;
class BankAccount
{
public:
    string accountHolderName = "nikhil";
    int balance1 = 500000;

    BankAccount()
    {
        // this is a constructor
    }
    void deposit(int deposit)
    {

        auto last = deposit;
        balance1 = 500000 + last;
        cout << "\n\n";
        system("cls");
        cout << "Balance before Deposit : " << balance1 - last << endl;
        cout << "New balance after deposit : " << balance1 << endl;

        cout << "\n\nDo you want to do further operations ? y/n" << endl;
        char ch;
        cin >> ch;
        if (ch == 'y')
        {
            perform_operations();
        }
    }
    void withdrawl()
    {

        auto performWithdrawal = [this]() mutable
        {
            int with;
            system("cls");
            cout << "Enter amount to withdraw: ";
            cin >> with;

            if (with > balance1)
            {
                cout << "Insufficient balance!" << endl;
            }
            else
            {
                balance1 -= with;
                cout << "Amount withdrawn: " << with << endl;
                cout << "Remaining balance: " << balance1 << endl;
            }
        };

        // Call the lambda function
        performWithdrawal();

        cout << "\n\nDo you want to do further operations ? y/n" << endl;
        char ch;
        cin >> ch;
        if (ch == 'y')
        {
            perform_operations();
        }
    }

    void perform_operations()
    {
        system("cls");
        cout << "Enter your preffered operation : \n[1] for deposit  \n[2] for withdrawl\n: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            cout << "enter the amount to deposit : " << endl;
            int amt;
            cin >> amt;
            if (amt > 0)
            {
                deposit(amt);
            }
            else
            {
                cout << "enter valid amount" << endl;
            }
            break;
        case 2:
            system("cls");
            withdrawl();
            break;
        default:
            system("cls");
            cout << "Invalid choice";
            break;
        }
    }
};
int main()
{
start:
    BankAccount b1;
    b1.perform_operations();
    return 0;
}