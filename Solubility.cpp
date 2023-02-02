#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x >> a >> b;
        int ans;
        ans = a + ((100 - x) * b);
        cout << ans * 10 << e;
    }
    return 0;
}

// we simply need to print answer according to the given test cases which is written in line 16