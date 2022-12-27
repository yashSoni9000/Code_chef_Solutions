#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        float n, x;
        cin >> n >> x;
        cout << ceil((n * x) / 4) << e;
    }
    return 0;
}

// we need to get the total no of slices first and then we need to divide by 4
// as each pizza consist of 4 slices and then take ceiling value of it to get our ans