#include <iostream>
#include <fstream>
using namespace std;
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // open a text file for appending
    ofstream my_file("C:\\Users\\g_n-n\\Desktop\\internship\\INTERNSHIP\\DAY 18\\FILE HANDLING\\example.txt");

    // check the file for errors
    if (!my_file)
    {
        cout << "error : can't open the file" << endl;
        return 1;
    }

    // write multiple lines to the files

    my_file << "subhasj 30" << endl;
    my_file << "ratuja 40" << endl;
    my_file << "yadhav 50" << endl;
    my_file << "mashdi 60" << endl;

    // close the file
    my_file.close();
    return 0;
}