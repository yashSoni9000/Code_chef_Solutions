#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        x %= 4;
        switch (x)
        {
        case 0:
            cout << "North" << e;
            break;
        case 1:
            cout << "East" << e;
            break;
        case 2:
            cout << "South" << e;
            break;
        case 3:
            cout << "West" << e;
            break;
        }
    }
    return 0;
}

// to find direction we can observe that we can divide in 4 parts so it will north at each multiple of 4, east when remainder is 1
// and so on to get our answer