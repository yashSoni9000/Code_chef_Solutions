#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
            cout << "LOSS" << e;
        else if (x < y)
            cout << "PROFIT" << e;
        else
            cout << "NEUTRAL" << e;
    }
    return 0;
}

// basic if else statement where if x>y the print x else y
//  if  both equal then print neutral