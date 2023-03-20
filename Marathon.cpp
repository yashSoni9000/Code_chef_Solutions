#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, D, d, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> D >> d >> a >> b >> c;
        int run = D * d;
        if (run < 10)
            cout << 0 << e;
        else if (run >= 10 && run < 21)
            cout << a << e;
        else if (run >= 21 && run < 42)
            cout << b << e;
        else
            cout << c << e;
    }
    return 0;
}

// watch the constraints carefully we have a max of 10 D days remaining and max of 5 d kms
// that chef can cover so there can be at max 50 kms that can be covered here so we simply need
// to check that in which range the total kms lies  if less than 10 we print 0 else if lies between
//  10 and 21 print a else if between print b else print c