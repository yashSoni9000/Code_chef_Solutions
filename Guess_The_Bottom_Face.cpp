#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << 7 - x << e;
    }
    return 0;
}

// we are given that dice opposite faces sum is 7 and we are given one of
// the faces i.e x+y=7 where x and y are faces and sum is 7 we are given x
// so we can find y=7-x