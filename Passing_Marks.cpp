#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, aMin, bMin, cMin, tMin, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> aMin >> bMin >> cMin >> tMin >> a >> b >> c;
        if ((a >= aMin) && (b >= bMin) && (c >= cMin) && ((a + b + c) >= tMin))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// we only need to check the condition where the chef will pass the exam which is the given condition
//  else in all the condition we need to print no