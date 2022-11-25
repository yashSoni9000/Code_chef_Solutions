#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if ((a + c) == (b + d))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// basic if else statement that if the a and c angles sum
// is equal to the sum of angles of b and d