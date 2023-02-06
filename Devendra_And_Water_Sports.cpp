#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, z, y, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> z >> y >> a >> b >> c;
        z -= y;
        if (z >= (a + b + c))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we simply need to first check the remaining balance after his y amount spend
// then we calculater the total amount of cost that all the 3 sports cost combined
// if the remaining balance is greater than or equal to the combined cost then we print yes else no