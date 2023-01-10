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
        y *= x;
        z *= x;
        z -= y;
        cout << z << e;
    }
    return 0;
}

// we first find out the selling price at y rate the we find selling price at z rate , after that we take the
// difference between both the selling price to get our profit