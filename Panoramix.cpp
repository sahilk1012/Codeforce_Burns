#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i = n + 1;
    int nextPrime = 0;

    while (true)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            nextPrime = i;
            break;
        }

        i++;
    }

    if (nextPrime == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
