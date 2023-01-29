#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if ((x + y) <= z)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we need to check if the amount of days he spends with family and friends i.e. (x+y)
// is less than the duration of vacation (z) if yes the print yes else no
// we do not need to take care how much duration of days friends or family take
// we need to print yes if the duation is less than the gien duration of vacation(z)