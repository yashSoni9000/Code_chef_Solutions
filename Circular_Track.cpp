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
        ll a, b, m;
        cin >> a >> b >> m;
        cout << min(abs(a - b), (min(a, b) + m) - max(a, b)) << e;
    }
    return 0;
}

// this question was of observation where we had to observe the patterns
// by taking random test cases. Let's say that the numbers are 1,2...8
// and a=2 and b=6 so we can see that the diff of b-a is 4 and the smaller
// number which is 2 when added to the m=8 then we get 10 and then if we
// subtract we also get 4 which means we need to take absolute of 2 numbers
// in first case to get distance in clockwise direction and then take min of a and b and add it to m and then
// subtract max of a and b to get the distance from anticlockwise direction
// finally we take min of those distances to get our ans
