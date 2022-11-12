#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 10)
            cout << "Thanks for helping Chef!" << e;
        else
            cout << -1 << e;
    }
    return 0;
}

// um... if your answer was wrong then you need
//  to write exact string which is given
//  in case sensetive