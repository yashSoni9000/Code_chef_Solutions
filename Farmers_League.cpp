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
        cout << (n - 1) * 3 - ((n - 1) / 2) * 3 << e;
    }
    return 0;
}

// to get the maximum points we need to do (n-1)*3 to get max points and to get the second max points we need to divide n-1 by 2
// then multiply by 3 to get the second max points , after that we take the difference to get our result