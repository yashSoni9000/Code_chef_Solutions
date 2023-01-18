#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if ((m * k) >= n)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// if we get to know how many bread we have after m number of days we can get this by multiplying
// per day consumption i.e. k to get it and then check the condition