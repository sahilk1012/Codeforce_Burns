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
        
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (is_sorted(a.begin(), a.end()))
        {
            int minsum = INT_MAX;
            for (int i = 0; i < n-1; i++)
            {
                if ((a[i+1] - a[i]) <= minsum)
                {
                    minsum = (a[i+1] - a[i]);
                }
            }
            cout << minsum/2 + 1 << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}