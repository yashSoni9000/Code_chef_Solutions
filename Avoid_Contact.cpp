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
        if (x == y)
            cout << ((y * 2) - 1) << e;
        else
            cout << x + y << e;
    }
    return 0;
}

// This is the situation where the no of people is equal to the number of infected people. In this condition by observing we can see
// that the no of rooms required is (2*no of infected people -1) Else in every other condition the no of rooms is equal to the sum
// of no of total people and infected people. Here is why , this is because the infected people will take the double room for each
// infected person so the no of rooms is double the infected people . Then after that we also need to put those not infected people
// which is (total no of people - infected people ) Adding all that always gives the same result as adding (x+y) that is why we
// added both of them