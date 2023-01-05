#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, g1, s1, b1, g2, s2, b2;
    cin >> t;
    while (t--)
    {
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if ((g1 + s1 + b1) > (g2 + s2 + b2))
            cout << 1 << e;
        else
            cout << 2 << e;
    }
    return 0;
}

// we need to check if the sum of medals of first country has combined more medals than second
// country if yes then print 1 else print 2