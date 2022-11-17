#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        if (x % 10 != 0 && x % 5 != 0)
            cout << -1 << e;
        else if (x % 10 == 0)
            cout << x / 10 << e;
        else
        {
            x /= 10;
            cout << x + 1 << e;
        }
    }
    return 0;
}

// we simpley need to check if the number is divisible by 10
// then we need to print x/10 as this will give the smallest number
// if coins if any other numhber then we will check if it is only divible
// by 5 then we only need one 5 rupee coin rest we will take 10 rupee coins