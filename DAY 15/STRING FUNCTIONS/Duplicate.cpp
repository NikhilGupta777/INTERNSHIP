// // finding duplicate string without using stl library
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void findDuplicate(string str)
// {
//     vector<char> v;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (v.size() == 0)
//         {
//             v.push_back(str[i]);
//         }
//         else
//         {
//             for (int j = 0; j < v.size(); j++)
//             {
//                 if (str[i] == v[j])
//                 {
//                     cout << str[i] << " is duplicate" << endl;
//                     return;
//                 }
//             }
//         }
//         v.push_back(str[i]);
//     }
// };
// int main()
// {
//     vector<string> words("welcome", "to", "miet", "for", "intern", "to", "intern");
//     findDuplicate(words);

//     return 0;
// }

// finding duplicate string without using stl library (except for vector)
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void findDuplicate(string words)
// {
//     vector<char> seen;

//     for (int i = 0; i <)

//     // for (char c : str)
//     // {
//     //     for (char s : seen)
//     //     {
//     //         if (c == s)
//     //         {
//     //             cout << c << " is duplicate" << endl;
//     //             return;
//     //         }
//     //     }
//     //     seen.push_back(c);
//     // }
// }

// int main()
// {
//     string words[] = {"welcome", "to", "miet", "for", "intern", "to", "intern"};

//     findDuplicate(words);

//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string words[] = {"welcome", "to", "miet", "for", "intern", "to", "intern"};
    // int count = 0;
    // int times = 0;
    // string words2[10];
    // string duplicate[10];
    // sort(words.begin(), words.end());
    // int size;
    // cout << "enter how many words you want to enter : " << endl;
    // cin >> size;
    // string words[size];
    // string words2[20];
    string str;
    vector<string> words;
    cout << "enter the string  : ";
    getline(cin, str);

    cout << str;
    int size = str.length();

    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] == " ")
        {
            
        }
    }

    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (words[i] == words[j])
    //         {
    //             words2->append(words[i]);
    //             cout << words[i] << endl;
    //         }
    //     }
    // }

    // for (int i : words2)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n\nREPETITION :\n\n";
    // for (int i = 0; i < words.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < words.size(); j++)
    //     {
    //         if (words[i] == words[j])
    //         {
    //             // times++;
    //             cout << "\nWord repeated :" << words[i];
    //             count++;
    //         }
    //     }
    // }
    return 0;
}