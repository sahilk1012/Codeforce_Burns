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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if (m.size() > 2)
            cout << "NO" << endl;
        
        else
        {
            int c1 = m.begin()->second;
            int c2 = m.rbegin()->second;

            if (abs(c1 - c2) <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
