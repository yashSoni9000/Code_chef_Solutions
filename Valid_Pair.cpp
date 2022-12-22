#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // 	cin>>t;
    while (t--)
    {
        bool flag = false;
        int a[11] = {0}, socks;
        f(3)
        {
            cin >> socks;
            a[socks]++;
        }
        f(11)
        {
            if (a[i] >= 2)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// Here we will need an array which will take care of the frequency of
// the numbers to be repeated ,if the frequency is greater than  or equal to 2
// then we print yes else no