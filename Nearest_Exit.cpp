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
        if (x > 50)
            cout << "RIGHT" << e;
        else
            cout << "LEFT" << e;
    }
    return 0;
}

// we need to check if the given input is greater than 50 then we need to print right else left