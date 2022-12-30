#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, x;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x;
        if (a > b)
            cout << 0 << e;
        else
            cout << (b - a) / x << e;
    }
    return 0;
}

// we need to take care of a case where he already have amount more than his target
// value in that case he has already achieved his aim so it will take him 0 years
// else we will cout difference of b and a and the divide by x (increment) to get no of years