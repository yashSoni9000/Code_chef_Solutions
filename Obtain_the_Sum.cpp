#define ll long long
#define f(end) for (register int i = 1, d; i <= end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll n, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        ll num;
        num = n * (n + 1) / 2;
        num -= s;
        if (num < 1 || num > n)
            cout << -1 << e;
        else
            cout << num << e;
    }
    return 0;
}

// 1) sum of all the elements from 1 to n should be greater than given s
// 2) difference of sum of number and s should give us position

// 2) if position is out of scope of n then print -1