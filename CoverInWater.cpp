#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int total_empty = 0;
        int consecutive_empty = 0;
        bool infinite_water_possible = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                total_empty++;
                consecutive_empty++;
            }
            else
            {
                consecutive_empty = 0;
            }

            if (consecutive_empty >= 3)
            {
                infinite_water_possible = true;
            }
        }

        if (infinite_water_possible)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total_empty << endl;
        }
    }
    return 0;
}