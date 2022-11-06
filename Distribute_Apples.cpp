#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        ll n, k;
        cin >> n >> k;
        if (k == 1)
            cout << "NO" << e;
        else if ((n / k) % k == 0)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// here if the number of boxes is 1 then no matter who
// puts the apples in the box the result will be the same
//  n/k is number of apples distributed first user , so if
// n/k %k ==0 then we can say that they will not be same for both user
// say 16 and 8 , 16/8=2 and 2%8!=0 therefore ans is no