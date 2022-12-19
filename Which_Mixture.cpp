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
        if (a > 0 && b > 0)
            cout << "Solution" << e;
        else if (a == 0)
            cout << "Liquid" << e;
        else
            cout << "Solid" << e;
    }
    return 0;
}