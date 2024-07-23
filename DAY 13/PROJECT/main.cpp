#include "myheader1.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

void All_sort::functions()
{
start:
    All_sort a;

    system("cls");

    int choice;
    cout << "\n\t\t\t[SORTING]\n\n";
    cout << "Which sort do you want to perform: \n[1] - Bubble sort\n[2] - Selection sort\n[3] - Insertion sort\n[4] - Merge sort\n\n(Enter 1/2/3/4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        a.Bubble_sort();
        break;
    case 2:
        a.Selection_sort();
        break;
    case 3:
        a.Insertion_sort();
        break;
    case 4:
        a.Merge_sort();
        break;
    default:
        cout << "\nInvalid choice!! \nDo you want to continue sorting? y/n:";
        char ch;
        cin >> ch;

        if (ch == 'y')
            goto start;
        else
            exit(0);
    }
}

void All_sort::Bubble_sort()
{
    system("cls");

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array in non-sorted manner: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // int size = arr.size();
    int i, j, temp;

    for (j = 0; j < size - 1; j++)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << "\n\nDo you want to perform more operations? y/n";
    char ch;
    cin >> ch;

    if (ch == 'y')
        functions();
    else
        exit(0);
}

void All_sort::Selection_sort()
{
    system("cls");

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array in non-sorted manner: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << "\nDo you want to perform more operations? y/n";
    char ch;
    cin >> ch;

    if (ch == 'y')
        functions();
    else
        exit(0);
}

void All_sort::Insertion_sort()
{
    system("cls");

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array in non-sorted manner: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << "\n\nDo you want to perform more operations? y/n";
    char ch;
    cin >> ch;

    if (ch == 'y')
        functions();
    else
        exit(0);
}

void All_sort::Merge_sort()
{
    system("cls");

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array in non-sorted manner: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    stable_sort(arr.begin(), arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << "\n\nDo you want to perform more operations? y/n";
    char ch;
    cin >> ch;

    if (ch == 'y')
        functions();
    else
        exit(0);
}

int main()
{
    All_sort a;
    a.functions();

    return 0;
}
