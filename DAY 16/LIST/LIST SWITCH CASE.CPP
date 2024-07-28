#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
using namespace std;

int main()
{

    system("cls");
    int choice;
    list<int> l;
    list<int> l1;
    int size2;
    char ch;

    cout << "Enter the size of the list : " << endl;
    int size;
    cin >> size;
start:
    cout << "Enter the elements of the list : " << endl;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
again:
    system("cls");
    cout
        << "\nEnter your choice : \n1.Reverse\n2.sort\n3.unique\n4.empty\n5.size\n6.clear\n7.merge\n8.exit\n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");

        l.reverse();

        cout << "Modified list : " << endl;
        for (int i : l)
        {
            cout << i;
        }

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }
        break;
    case 2:
        system("cls");

        l.sort();
        cout << "Modified list : " << endl;
        for (int i : l)
        {
            cout << i;
        }

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }
        break;
    case 3:
        system("cls");

        l.unique();
        cout << "Modified list : " << endl;
        for (int i : l)
        {
            cout << i;
        }

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }
        break;
    case 4:
        system("cls");

        if (l.empty())
        {
            cout << "List is empty" << endl;
        }
        else
        cout<<"\nlist is not empty!";

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }
        break;
    case 5:
        system("cls");

        cout << "Size of the list is : " << l.size() << endl;


        cout << "\n\nDo you want to perform more operations ? y/n";

        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }
        break;
    case 6:
        system("cls");

        l.clear();
        cout << "Modified list : " << endl;
        for (int i : l)
        {
            cout << i;
        }

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            cout << "\n\nYou have to re-enter the list because its empty! ";
            goto start;
        }
        else
        {
            exit(0);
        }
        break;
    case 7:
        system("cls");

        cout << "Enter the size of the new list to merge : " << endl;

        cin >> size2;
        cout << "Enter the elements of the new list to merge : " << endl;
        for (int i = 0; i < size2; i++)
        {
            int y;
            cin >> y;
            l1.push_back(y);
        }

        cout << "\nMerging the two lists :l1 and l2\n";
        l.merge(l1);
        cout << "\nThe new List after merge is : " << endl;
        for (auto i : l)
        {
            cout << i << " ";
        }

        cout << "\n\nDo you want to perform more operations ? y/n";
        cin >> ch;
        if (ch == 'y')
        {
            goto again;
        }
        else
        {
            exit(0);
        }

        break;

    case 8:
        system("cls");

        cout << "THANKYOU FOR USING THIS PROGRAM!!!" << endl;
        cout << "BYE!!!";
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        cout << "re-enter your choice : ";
        goto again;
    }
    return 0;
}
