#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int life = 0, num;
        bool flag = false;
        cin >> n >> x;
        f(n - 1)
        {
            cin >> num;
            life += num;
            if (life >= (n * x))
                flag = true;
        }
        if (flag)
            cout << 0 << e;
        else
        {
            n *= x;
            n -= life;
            cout << n << e;
        }
    }
    return 0;
}

// In this question I first i took the given inputs without using arry then
// checked every time that if the sum of the life of bubs is greater than the required amount
// if yes then we mark the flag true so that it does not need to be calculated further
// and outside the loop we check if the flag is true then we print 0 else we get the required
// amount of life for the bulb and print it