#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    // opening a text fule for writing.you you can use open() file.
    // ofstream my_file.open("example.txt");

    // ofstream my_file("hello.txt");
    // close the file
    // my_file.close();

    // CHECK IF THE FILE EXISTS AND IF THERE ARE ANY ERORS :
    //
    //
    //
    // ________________________________________________________________________________________________________
    //

    //----------------------1ST METHOD----------------------//

    // if (!my_file)
    // {
    //     cout << "the file doesnt exist! ";
    // }
    // else
    //     cout << "the file exists!!!";
    //
    //
    // ________________________________________________________________________________________________________
    //
    //
    //

    //----------------------2ND METHOD----------------------//

    // if (my_file.is_open() == 1)
    // {
    //     cout << "the file is open! ";
    // }
    // else
    //     cout << "the file is closed";
    //
    //
    // ________________________________________________________________________________________________________
    //
    //

    //----------------------3RD METHOD----------------------//
    // USING THE FAIL FUNCTION TO TELL IF THE FILE IS CREATED
    // TRUE - IF THE FILE FAILED TO OPEN OR IS IN STATE OF ERROR
    // FALSE - IF THE FILE IS IN OPEN STATE

    // if (my_file.fail())
    // {
    //     cout << "FAIL/file coudn't be created";
    //     return 1;
    // }
    //
    //___________________________________________________________________________________________________________
    //
    //
    // TOPIC - READ FROM FILE
    // ITS DONE BY READING THEFILE FROM START TO END

    // WE USE EOF TO CHECK IF THE END OF FILE

    // 1 IS TRUE
    // 2 IS FALSE
    //
    //
    //________________________________________________________________________________________________________
    //
    //
    //
    // open a file for reading

    ifstream my_file("myfile.txt");
    // ifstream my_file("myfile.txt");
    // check the file for errors
    if (!my_file)
    {
        cout << "Error : unable to open the file! " << endl;
        return 1;
    }

    // store the contents of the file in "line" string

    string line;

    // loop until the eof
    while (!my_file.eof())
    {
        // store the current lin e of the file in the "line" variable

        getline(my_file, line);
        // print the line variable
        cout << line << endl;
    }

    my_file.close();
    // we use return 1 whenever we feel that some block of code is giving error then we return 1

    return 1;
}

// remove("hello.txt");
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // open a text file for writing
    ofstream my_file("example.txt");
    // check the file for errors
    if (!my_file)
    {
        cout << "error : can't open the file" << endl;
        return 1;
    }

    // write multiple lines to the files

    my_file << "mohan 30" << endl;
    my_file << "mayur 40" << endl;
    my_file << "eagle 50" << endl;
    my_file << "jitu 60" << endl;

    // close the file
    my_file.close();
    return 0;
}
