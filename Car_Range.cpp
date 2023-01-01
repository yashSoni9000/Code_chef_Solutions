#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p, m, v;
    cin >> t;
    while (t--)
    {
        cin >> p >> m >> v;
        if (p == 1)
            cout << m * v << e;
        else
            cout << ((m + 1) - p) * v << e;
    }
    return 0;
}

// here we need to check if there is only one person is in car then we directly print the total distance
// by multiplying m by v if not then w increment m by one and subtract p from it to get the actual mileage
// then multiply by the remaining fuel i.e. v to get our answer