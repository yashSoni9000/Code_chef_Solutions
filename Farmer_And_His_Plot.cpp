#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = max(m, n); i > 0; i--)
        {
            if (m % i == 0 && n % i == 0)
            {
                cout << ((m / i) * (n / i)) << e;
                break;
            }
        }
    }
    return 0;
}

// we need a number which divides both m and n and we divide the number by m and n and multiply it