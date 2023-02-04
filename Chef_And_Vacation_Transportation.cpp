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
        if ((x + y) > z)
            cout << "TRAIN" << e;
        else if ((x + y) < z)
            cout << "PLANEBUS" << e;
        else
            cout << "EQUAL" << e;
    }
    return 0;
}

// we need to simply check if the flight(x) and bus(y) together takes less time
// or not if yes then print PLANEBUS else if they take more time print TRAIN
// else print EQUAL