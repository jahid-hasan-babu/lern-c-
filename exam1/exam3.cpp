// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     char S[100000];

//     while (cin.getline(S, 100000))
//     {
//         int len = strlen(S);

//          string temp = "";
//         for (int i = 0; i < len; i++)
//         {
//             if (S[i] != ' ')
//             {
//                 temp += S[i];
//             }
//         }
//            sort(temp.begin(), temp.end());

//             cout << temp << endl;
//     }

//     return 
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;

    while (getline(cin, line))
    {

        line.erase(remove(line.begin(), line.end(), ' '), line.end());

        sort(line.begin(), line.end());

        cout << line << endl;
    }
    return 0;
}