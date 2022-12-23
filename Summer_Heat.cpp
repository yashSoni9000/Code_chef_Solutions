#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x1, x2, X1, X2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> x2 >> X1 >> X2;
        X1 /= x1;
        X2 /= x2;
        cout << X1 + X2 << e;
    }
    return 0;
}

// by dividing the a and b type coconut we get the number of coocnut
// and so we print the sum of the two