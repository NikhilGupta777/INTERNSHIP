#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string solve = "is2 sentence4 This1 a3";
    string answer[20];

    for (int i = 0; i < solve.size() - 1; i++)
    {
        if (isdigit(solve[i]))
        {
            for (int j = i; j > 0; --j)
            {
                if (solve[i] != ' ')
                {
                    cout << solve[i];
                }
            }
        }
    }
    return 0;
}
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     std::string input = "is2 sentence4 This1 a3";
//     std::vector<std::string> words;

//     std::string currentWord;
//     for (char c : input)
//     {
//         if (isdigit(c))
//         {
//             if (!currentWord.empty())
//             {
//                 words.push_back(currentWord);
//                 currentWord.clear();
//             }
//         }
//         else
//         {
//             currentWord += c;
//         }
//     }
//     if (!currentWord.empty())
//     {
//         words.push_back(currentWord);
//     }

//     std::sort(words.begin(), words.end(), [](const std::string &a, const std::string &b)
//               {
//         for (char c : a)
//         {
//             if (isdigit(c))
//             {
//                 int indexA = c - '0';
//                 for (char d : b)
//                 {
//                     if (isdigit(d))
//                     {
//                         int indexB = d - '0';
//                         return indexA < indexB;
//                     }
//                 }
//             }
//         }
//         return false; });

//     for (const std::string &word : words)
//     {
//         std::cout << word << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }