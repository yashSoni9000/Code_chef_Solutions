#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, g, c;
    cin >> t;
    while (t--)
    {
        cin >> g >> c;
        c = c * c;
        c /= (2 * g);
        cout << c << e;
    }
    return 0;
}

// we need to calculate max speed achieved by chef from the given g and c by using
// the given formula c^2/(2*g) the output is the required answer