#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << n * m << e;
    }
    return 0;
}

// the total time that chef has to wait is the product of number of persons and
// time each customer take