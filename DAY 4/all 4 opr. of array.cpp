// #include <iostream>
// using namespace std;
// int main()
// {
// start:

//     int a[5], i, op;
//     int choice;

//     cout
//         << "what op. you want to perform: \n\n1-create \n2-read \n3-update \n4-delete \n5-exit"
//         << endl;
//     cin >> op;
//     switch (op)
//     {
//     case 1:
//         cout << "enter the elements of array(5)" << endl;
//         for (i = 0; i < 5; i++)
//         {
//             cin >> a[i];
//         }
//         cout << "do you want to perform any other operation? 1-y / 2-n" << endl;
//         cin >> choice;
//         if (choice == 1)
//         {
//             goto start;
//         }
//         break;

//     case 2:
//         cout << "the array is" << endl;
//         for (i = 0; i < 5; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << "do you want to perform any other operation? 1-y / 2-n" << endl;
//         cin >> choice;
//         if (choice == 1)
//         {
//             goto start;
//         }
//         break;

//         break;
//     case 3:
//         int elm;
//         cout << "enter the element to be updated" << endl;
//         cin >> elm;
//         cout << "enter the new element" << endl;
//         int newelm;
//         cin >> newelm;
//         for (i = 0; i < 5; i++)
//         {
//             if (a[i] == elm)
//                 a[i] = newelm;
//         }
//         cout << "do you want to perform any other operation? 1-y / 2-n" << endl;
//         cin >> choice;
//         if (choice == 1)
//         {
//             goto start;
//         }
//         break;

//         break;
//     case 4:
//         cout << "enter the element to be deleted" << endl;
//         cin >> elm;
//         for (i = 0; i < 5; i++)
//         {
//             if (a[i] == elm)
//             {
//                 for (int j = i; j < 5; j++)
//                 {
//                     a[j] = a[j + 1];
//                 }
//             }
//             cout << "do you want to perform any other operation? 1-y / 2-n" << endl;
//             cin >> choice;
//             if (choice == 1)
//             {
//                 goto start;
//             }
//             break;

//             break;
//         case 5:
//             cout << "exit" << endl;
//             break;
//         default:
//             cout << "invalid option" << endl;
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a[5], i, op, choice, size = 0; // size to keep track of current number of elements

    while (true)
    {
        cout << "\nWhat operation do you want to perform: \n"
             << "1-create \n"
             << "2-read \n"
             << "3-update \n"
             << "4-delete \n"
             << "5-exit\n";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Enter elements of array (up to 5):" << endl;
            for (i = 0; i < 5; i++)
            {
                cin >> a[i];
                size++; // increment size after each input
            }
            break;

        case 2:
            cout << "The array elements are:" << endl;
            for (i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            break;

        case 3:
            int elm, newelm;
            cout << "Enter the element to be updated: ";
            cin >> elm;
            cout << "Enter the new element: ";
            cin >> newelm;
            for (i = 0; i < size; i++)
            {
                if (a[i] == elm)
                    a[i] = newelm;
            }
            break;

        case 4:
            if (size == 0)
            {
                cout << "Array is empty. Cannot delete." << endl;
            }
            else
            {
                int elm;
                bool found = false;
                cout << "Enter the element to be deleted: ";
                cin >> elm;
                for (i = 0; i < size; i++)
                {
                    if (a[i] == elm)
                    {
                        found = true;
                        for (int j = i; j < size - 1; j++)
                        {
                            a[j] = a[j + 1];
                        }
                        size--; // reduce size after deletion
                        break;  // exit loop once element is found and deleted
                    }
                }
                if (!found)
                {
                    cout << "Element not found in the array." << endl;
                }
            }
            break;

        case 5:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid option. Please enter a number between 1 and 5." << endl;
            break;
        }

        cout << "\nDo you want to perform another operation? (1-yes / 2-no): ";
        cin >> choice;
        if (choice != 1)
        {
            cout << "Exiting..." << endl;
            break; // exit while loop if user chooses not to continue
        }
    }

    return 0;
}
