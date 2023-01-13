#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, xr, yr, d;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> xr >> yr >> d;
        x = min((x / xr), (y / yr));
        if (x == 0 || x < d)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// we need to first get the remaining food supply by dividing total unit of supply
// by per day need to chef , we take min of both water and food because even if one
// of the supplies dries up the chef cant survive therefore the min of two is the max
// day which chef can survive , so if the days is either 0 or less than the number
// of given days then we print no else yes