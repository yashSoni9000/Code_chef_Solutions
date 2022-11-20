#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, u, v;
        cin >> u >> v;
        n = u + v;
        n = n * (n + 1) / 2 + u + 1;
        cout << n << e;
    }
    return 0;
}

// here this problem was related to ad-hoc type(even non programmner can get the logic)
