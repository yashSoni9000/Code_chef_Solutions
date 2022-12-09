#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, m, d;
    cin >> t;
    while (t--)
    {
        cin >> x >> m >> d;
        cout << min((x * m), (x + d)) << e;
    }
    return 0;
}

// we need to find the minimum of the work multiplied by m and
// work x plus at max time taken