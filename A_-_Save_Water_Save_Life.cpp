#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, h, x, y, c;
    cin >> t;
    while (t--)
    {
        cin >> h >> x >> y >> c;
        x += (y / 2);
        h *= x;
        if (h <= c)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// In this question's test case explanations gives us the answer we simply need to follow what it says and check
// the condition that if the usage(h)* houses(x, line 16) is less than the capacity
// if yes we print yes else print no