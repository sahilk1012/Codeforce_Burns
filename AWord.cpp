#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int uc = 0, lc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            uc++;
        }
        else
            lc++;
    }
    if (uc > lc)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
}