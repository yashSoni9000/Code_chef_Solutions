#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, s, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> s >> x >> y >> z;
        int temp;
        temp = x + y;
        s -= temp;
        if (s >= z)
            cout << 0 << e;
        else
        {
            if ((s + x) >= z || (s + y) >= z)
                cout << 1 << e;
            else
                cout << 2 << e;
        }
    }
    return 0;
}

// in this i learnt to do the printing or calculations in
//  sequence which is given to us ,this question we have to
// we check here if the difference and each app sum is greater
// then the required app so we print 1 else 2