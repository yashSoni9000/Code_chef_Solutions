#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, price;
    cin >> t;
    while (t--)
    {
        float ans, quantity;
        cin >> quantity >> price;
        ans = quantity * price;
        if (quantity > 1000)
            cout << fixed << setprecision(6) << ans - (ans * 0.1) << e;
        else
            cout << fixed << setprecision(6) << ans << e;
    }
    return 0;
}

// we first get the total amount and then we check if the quantity is greater than
// 1000 then we reduce 10% from the given total amount else we simply print the
// total amount with decimal values