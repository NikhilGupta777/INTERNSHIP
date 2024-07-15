#include <iostream>
#include <ctime>
using namespace std;

void bubbleSort(int arr[], int size)
{
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

int main()
{
    clock_t start, end;
    double cpu_time_used;

    int size, i;
    cout << "enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array in non sorted manner: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    start = clock();

    bubbleSort(arr, size);

    end = clock();

    cout << "new array: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    cout << "\n\nExecution time: " << cpu_time_used << " seconds" << endl;

    return 0;
}
