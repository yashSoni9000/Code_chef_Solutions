#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, l, k, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> l;
        r = n - k;
        r = min(r, k);
        cout << r * l << e;
    }
    return 0;
}

// first we need to find the number of right and left slippers once we find that from subtracting
// given left slippers to total no of slippers , then we select the min of them as
// min of both of them gurantees that the other pair is available for it so then we
// multiply it with the given selling price and print it