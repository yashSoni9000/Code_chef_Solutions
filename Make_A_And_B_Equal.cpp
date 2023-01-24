#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, maxi, mini;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        maxi = max(a, b);
        mini = min(a, b);
        while (mini < maxi)
        {
            mini *= 2;
        }
        if (mini == maxi)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// Here we checked in a loop that while the smaller number is smalller than the larger number
// we have to keep adding 2 to it . If after a certain number of operations the numbers are equal then we print yes else no