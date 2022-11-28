#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        if (n % 10 == 0)
            cout << n / 10 << e;
        else
            cout << n / 10 + 1 << e;
    }
    return 0;
}

// we simply  need to check if the number is divisible by 10
// if yes then we simply need to divide the number by 10
// else we add +1 to the divided number as the extra one will
// be stored in that +1 bag