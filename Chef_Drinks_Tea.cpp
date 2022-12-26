#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        float x, y, z;
        cin >> x >> y >> z;
        if (x <= y)
            cout << z << e;
        else
            cout << ceil(x / y) * z << e;
    }
    return 0;
}

// we need to check if the x<=y then chef can get the req amount of tea in one go
// else we will divide x/y to get how much extra he need and since he might need
// a little extra , we used ceiling function and multiply it by z to get the correct
// answer :)