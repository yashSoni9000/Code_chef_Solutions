#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, r1, r2, r3;
    cin >> t;
    while (t--)
    {
        cin >> r1 >> r2 >> r3;
        if (r1 > (r2 + r3))
            cout << "YES" << e;
        else if (r2 > (r1 + r3))
            cout << "YES" << e;
        else if (r3 > (r1 + r2))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// Basic if else statement that if the given condition
//  holds true then we print yes else no