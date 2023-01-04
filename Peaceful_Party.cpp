#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a + c) > b)
            cout << a + c << e;
        else
            cout << b << e;
    }
    return 0;
}

// we need to check if a+c is greater than b then print a+c else print b