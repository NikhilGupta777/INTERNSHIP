#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

void Bubble_sort(vector<int> &arr)
{
    int size = arr.size();
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
}

void Selection_sort(vector<int> &arr)
{
    int size = arr.size();
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
}

void Insertion_sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void Merge_sort(vector<int> &arr)
{
    stable_sort(arr.begin(), arr.end());
}

int main()
{
    int choice = 0;
    int size;
start:
    system("cls");

    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array in non-sorted manner: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    system("cls");

    cout << "\n\t\t\t[SORTING]\n\n";
    cout << "Which sort do you want to perform: \n[1] - Bubble sort\n[2] - Selection sort\n[3] - Insertion sort\n[4] - Merge sort\n\n(Enter 1/2/3/4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        Bubble_sort(arr);
        break;
    case 2:
        Selection_sort(arr);
        break;
    case 3:
        Insertion_sort(arr);
        break;
    case 4:
        Merge_sort(arr);
        break;
    default:
        cout << "Invalid choice!! \nDo you want to continue sorting? y/n:";
        char ch;
        cin >> ch;

        if (ch == 'y')
            goto start;
        else
            exit(0);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
