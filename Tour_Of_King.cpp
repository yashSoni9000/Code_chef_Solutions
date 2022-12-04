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
        cout << (n * 5) + (m * 7) << e;
    }
    return 0;
}

// basic maths to be applied that 'n' to be multiplied with 5 and
// 'm' with 7 and add both of them to get result