#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m, n, k;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> k;
        if ((n * k) < m)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we need to check if the time taking by n episodes is strictly less than the time remainin
// in exam then we print yes else no , and to find the episode watching time we
// multiply number of episodes by their time i.e. n*k