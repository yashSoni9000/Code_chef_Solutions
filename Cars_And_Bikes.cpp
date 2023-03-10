#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 4 == 0)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// In question we are stated that car requires 4 tyre and company manufactures cars first and then bikes
// so if the given number of tyre is a multiple of 4 then that means from all those tyres only cars can be made
// eg: 12
// 12 is a multiple of 4 so 4+4+4=12 so 3 cars can be made using that
// eg 10
// 10 is not multiple of 4 so 4+4+2=10 so there is a room for bike