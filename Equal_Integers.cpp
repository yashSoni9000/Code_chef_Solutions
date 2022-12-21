#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        bool flag = false;
        cin >> x >> y;
        if (x <= y)
            cout << y - x << e;
        else
        {
            x -= y;
            if (x % 2 == 0)
                flag = true;
            x /= 2;
            if (flag)
                cout << x << e;
            else
                cout << x + 2 << e;
        }
    }
    return 0;
}

// This question was of observation where we needed to do some test cases
// if x <y then we simply need to print the difference else we need to take the
// we take the difference of two and check if the difference is divisible by 2
// then we print the divison of number by 2 else we print the divison and add 2 to it