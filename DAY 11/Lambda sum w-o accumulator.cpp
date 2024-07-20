#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    int sum = 0;

    auto add = [&sum](vector<int> num)
    {
        for (int i : num)
        {
            sum += i;
        }
        return sum;
    };

    cout << "sum is: "
         << add(num);

    return 0;
}