#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, x, b, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> b >> y;
        double c, d;
        c = (double(a) / double(x));
        d = (double(b) / double(y));
        if (c < d)
            cout << "BOB" << e;
        else if (c == d)
            cout << "EQUAL" << e;
        else
            cout << "ALICE" << e;
    }
    return 0;
}

// this question was to test the prototyping side of me
//  we just need to find the average speed using formula
//  speed=distance/time here the time may be in decimal
//  if the average speed is less than avg speed of bob then
//  print bob else print alice else print equal