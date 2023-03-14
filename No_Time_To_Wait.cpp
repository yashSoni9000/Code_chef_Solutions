#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, n, h, x;
    // 	cin>>t;
    while (t--)
    {
        cin >> n >> h >> x;
        int temp;
        bool ans = false;
        while (n--)
        {
            cin >> temp;
            if ((temp + x) >= h)
                ans = true;
        }
        if (ans)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we are given the time required to solve the question and also we are given the remaining hours
// if sum of remaining hours and time in different timelines add up to or more than required time
// we can then solve the question hence we make ans = true and if ans =true we print yes else no