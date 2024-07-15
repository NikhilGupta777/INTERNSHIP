
#include <iostream>
#include <vector>
#include <algorithm> // For std::count
using namespace std;

// Function to print the elements of the vector

void printVector(const vector<int> &vec)
{
    for (int elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;
}

// Function to add an element to the vector
void addElement(vector<int> &vec, int element)
{
    vec.push_back(element);
}

// Function to get the size of the vector
int getVectorSize(const vector<int> &vec)
{
    return vec.size();
}

// Function to count occurrences of a number in the vector
int countOccurrences(const vector<int> &vec, int number)
{
    return count(vec.begin(), vec.end(), number);
}

int sortVec(vector<int> &vec)
{
    int size = getVectorSize(vec), i;
    for (i = 0; i < size; i++)
    {
        sort(vec.begin(), vec.end());
    }
    for (i = 0; i < size; i++)
    {
        cout << vec[i];
    }
}

int main()
{
    vector<int> vec = {3, 4, 5, 7, 6, 7};
    int size = vec.size();

    // Print the size of the vector

    cout << "Size of vector: " << getVectorSize(vec) << endl;

    // Print the elements of the vector
    cout << "Elements of vector: ";
    printVector(vec);

    // Add an element to the vector
    addElement(vec, 7);
    cout << "Added element 7" << endl;

    // Print the new size of the vector
    cout << "New size of vector: " << getVectorSize(vec) << endl;

    // Print the elements of the vector again
    cout << "Elements of vector: ";
    printVector(vec);

    // Count occurrences of the number 7 in the vector
    int number = 7;
    int count7 = countOccurrences(vec, number);
    cout << "Number " << number << " occurs " << count7 << " times in the vector." << endl;
    cout << "Sorted array: " << endl;
    cout << sortVec(vec) << endl;

    return 0;
}
