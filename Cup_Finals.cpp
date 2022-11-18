#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, d;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> d;
        x = abs(x - y);
        if (x <= d)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// only thing to take care in this question is that
// the difference between 2 teams can be less than 0 as
// welll so we need to take the absolute value of their
// subtraction