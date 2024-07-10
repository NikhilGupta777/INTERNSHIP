#include <iostream>
using namespace std;
void mul(int x, int y)
{
    cout << x * y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    mul(a, b);
    return 0;
}

/*we need user defined fnction when wour requirements are not fulfilled by the predefined _FUNCTIONAL_HASH_H
with uder defined functions we can dynamically modify the function as per our requirements
also due to its readibility and reusability it has a plus point!


function features:

1)reusability

2)readability

add
sub
div
mul
rem

*/
