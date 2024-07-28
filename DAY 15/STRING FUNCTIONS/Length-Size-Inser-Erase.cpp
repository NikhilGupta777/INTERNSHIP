// /*
// STRING FUNCTIONS :

// 1.LENGTH
// 2.SIZE
// 3.INSERT
// 4.ERASE

// */
// #include <iostream>
// #include <string>
// #include <set>
// using namespace std;
// int main()
// {
//     string str = "Hello, World!";

//     // Length

//     cout << "Length: " << str.length() << endl;

//     // Size

//     cout << "Size: " << str.size() << endl;

//     // Insert

//     str.insert(7, "World");

//     cout << "Inserted string: " << str << endl;

//     return 0;

//     // Erase

//     str.erase(5, 7); // Erase ", World"

//     cout << "Erased string: " << str << endl;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     // string words[] = {"welcome", "to", "miet", "for", "intern", "to", "intern"};
//     // int count = 0;
//     // int times = 0;
//     // string words2[10];
//     // string duplicate[10];
//     // sort(words.begin(), words.end());
//     int size;
//     cout << "enter how many words you want to enter : " << endl;
//     cin >> size;
//     string words[size];
//     string words2[20];

//     cout << "enter the words : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> words[i];
//     }
//     cout << "\n\nRepeated words in the string : " << endl;
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (words[i] == words[j])
//             {
//                 words2->append(words[i]);
//                 cout << words[i] << endl;
//             }
//         }
//     }

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
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int output = 0;
    string jewels;
    cout << "Enter the type of jewels you have: " << endl;
    cin >> jewels;

    string stones = "aAAbbbb";

    // Loop through each character in jewels
    for (int i = 0; i < jewels.size(); i++)
    {
        // Loop through each character in stones
        for (int j = 0; j < stones.size(); j++)
        {
            // Check if the current jewel character matches the current stone character
            if (jewels[i] == stones[j])
            {
                output++;
            }
        }
    }

    // Output the final count
    cout << output << endl;
    return 0;
}

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int output = 0;
    string jewels;
    cout << "enter the type of jewels you have : " << endl;
    cin >> jewels;

    for (int i = 0; i < 3; i++)
    {
        cout << jewels[i] << endl;
    }

    string stones = "aAAbbbb";

    int size = stones.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (jewels[i] == stones[j])
            {
                output++;
            }
        }
    }
    cout << endl
         << output;
    return 0;
}