#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, sum1, sum2;
        cin >> x >> y;
        a = 500 - x * 2;
        b = x + y;
        b = 1000 - b * 4;
        sum1 = a + b;

        c = 1000 - y * 4;
        d = x + y;
        d = 500 - d * 2;
        sum2 = c + d;

        cout << max(sum1, sum2) << e;
    }
    return 0;
}

// In this question we had to carefully study the statements
// Here if a work ,for example, completes in 10 and 20 minutes
// for a and b resp. then after a is completed the time of b is
// increased by 10+20=30 min so that is then further calculated