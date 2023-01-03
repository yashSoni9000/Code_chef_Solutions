#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if ((a + b) < 3)
            cout << 1 << e;
        else if ((a + b) < 11)
            cout << 2 << e;
        else if ((a + b) < 61)
            cout << 3 << e;
        else
            cout << 4 << e;
    }
    return 0;
}

// we need to check the given conditions if true then print respective number