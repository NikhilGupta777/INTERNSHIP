#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
int main()
{
    ofstream my_file("C:\\Users\\g_n-n\\Desktop\\internship\\INTERNSHIP\\DAY 18\\FILE HANDLING\\credentials.txt");
    system("cls");
    cout << "Enter your username : " << endl;
    string username;
    cin >> username;
    string password;
    system("cls");
    cout << "Enter password : " << endl;

    cin >> password;

    my_file << username << endl;
    my_file << password;

    system("cls");

    cout << "The username and password successfully added in the credentials file!" << endl;

    my_file.clear();

    return 0;
}