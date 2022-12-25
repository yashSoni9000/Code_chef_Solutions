#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x1, x2, y1, y2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        float car1, car2;
        car1 = (float)y1 / x1;
        car2 = (float)y2 / x2;
        // cout<<car1<<" "<<car2<<e;
        if (car1 < car2)
            cout << -1 << e;
        else if (car1 > car2)
            cout << 1 << e;
        else
            cout << 0 << e;
    }
    return 0;
}

// the answer was given in the test cases only we simply need to prototype it
//  and check which car is cheaper