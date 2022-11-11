#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s, a, b;
        cin >> s;
        f(n / 2)
        {
            a += s[i];
        }
        for (int i = (n / 2); i < n; i++)
        {
            b += s[i];
        }
        if (a == b)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we simply checked if the first half of the string is equal
// to the next half of the string if yes then we print yes else no