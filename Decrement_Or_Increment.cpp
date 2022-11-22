#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, n;
    // 	cin>>t;
    while (t--)
    {
        cin >> n;
        if (n % 4 == 0)
            cout << n + 1 << e;
        else
            cout << n - 1 << e;
    }
    return 0;
}

// classic quesntion of modulus
// if the number is divisible by 4 then
// its remainder must be 0 hence applied the
// conditon n%4