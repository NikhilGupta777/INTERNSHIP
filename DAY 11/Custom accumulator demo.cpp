#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;
int main()
{
    vector<string> words = {"hello", "world", "from", "c++"};
    // using ccumulate with lambda to concatenate strings
    string result = accumulate(words.begin(), words.end(), string(""), [](const string &total, const string &word)
                               { return total + (total.empty() ? " " : " ") + word; });
    cout << "concatenated string : " << result << endl; // Output :: concatenated String : hello world from c++

    return 0;
}