#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 7 / 0;
    return 0;
}

/* error:

    .\hello.cpp: In function 'int main()':
    .\hello.cpp:6:11: warning: division by zero [-Wdiv-by-zero]
     i = 7 / 0;
         ~~^~~
*/



//cout-- character output stream-- to display the output

//cout-- character input stream-- to take the input from user