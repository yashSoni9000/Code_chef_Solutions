#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        bool odd = false, even = false;
        cin >> a >> b >> c;
        if ((a + b) & 1)
            cout << "YES" << e;
        else if ((a + c) & 1)
            cout << "YES" << e;
        else if ((b + c) & 1)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we need to check each condition manually for odd number if yes cout yes else cout no