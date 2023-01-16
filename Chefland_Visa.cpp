#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x1, x2, y1, y2, z1, z2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        if (x2 >= x1 && y2 >= y1 && z2 <= z1)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we only need to print yes if all the condition satisfies i.e. chef need to solve at least
// x1 problems ,y1 rating and last submission at most z1 months ago
// if all satisfies like above we print yes else print no