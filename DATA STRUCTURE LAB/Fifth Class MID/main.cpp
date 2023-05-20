#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int j;
    cin >> j;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        int letter = int(s[i]);
        if (letter == 32)
        {
            res += " ";
        }
        else
        {
            letter += j;
            char ch = char(letter);
            res += ch;
        }
    }
    cout << "\nEncoded text is:\n";
    cout << res;
}