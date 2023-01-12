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
        ll sum = 0;
        while (n != 0)
        {
            n /= 5;
            sum += n;
        }
        cout << sum << e;
    }
    return 0;
}

// we know that a zero comes in a number when either the number is multipled by 0 or 5 is multiplied by even number
// so we can sat that if we divide by 5 we will get the number of zeros in that number
// if the divided number is still greater than or equal to 0 then we divide it till we get 0
// we then add all the number which we divided to get our answer