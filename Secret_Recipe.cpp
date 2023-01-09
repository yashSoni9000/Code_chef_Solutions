#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    float x1, x2, x3, v1, v2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        x1 = x3 - x1;
        x2 -= x3;
        x1 = (float)x1 / v1;
        x2 = (float)x2 / v2;
        if (x1 < x2)
            cout << "Chef" << e;
        else if (x1 > x2)
            cout << "Kefa" << e;
        else
            cout << "Draw" << e;
    }
    return 0;
}

// we first need to find the distance between recipe and both chef and kefa then we divide it by their respective speed
// in floating points to get the precise time and then check , whichever has less time gets it