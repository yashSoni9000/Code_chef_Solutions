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
        if (x + y <= 6)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// if both x and y sum is less than 6 we print no else we print yes