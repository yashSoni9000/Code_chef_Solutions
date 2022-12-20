#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, d, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> d >> x >> y >> z;
        int choice1 = x * 7, remday;
        remday = 7 - d;
        y *= d;
        z *= remday;
        y += z;
        cout << max(y, choice1) << e;
    }
    return 0;
}

// we have to find work done by chef by both methods
// first method is we simply multiply x with 7 and
// second is we take given day z multiply with y and take
// remaining day with help of d and multiply with z to get
// out second result , then we simply need to print the max
// of those 2 methods