#define ll long long
#define f(end) for (int i = 0; i < end; i++)
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
        cin >> x >> y;
        cout << ((x * y) / 100) << e;
    }
    return 0;
}

// we first need to get the total number to coins that chef has got
// which we can do by multiplying x and y now to find the total number
// of back he can redeem we need to divide by 100 to get the number of bags