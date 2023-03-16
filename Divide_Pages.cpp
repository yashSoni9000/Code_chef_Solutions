#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int bob = 0, alice = 0;
        f(n)
        {
            cin >> temp;
            if (temp % 2 == 0)
                bob += temp;
            else
                alice += temp;
        }
        if ((bob % 2 == 0 && alice % 2 == 0) || (bob % 2 != 0 && alice % 2 != 0))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// this question was of observation and can only be understood when you put values in above code