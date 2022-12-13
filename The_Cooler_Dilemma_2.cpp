#define ll long long
#define f(end) for (int i = 0; i < end; i++)
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
        ll x, y, ans;
        cin >> x >> y;
        ans = y / x;
        if (ans * x < y)
            cout << ans << e;
        else
            cout << ans - 1 << e;
    }
    return 0;
}

// we need to check if our moudulo is less than the given number y so we divide it individually
// in order to satisfy the condition of less than and then multiply it with x to get the desired
// output