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
        if ((a + b) % 2 == 0)
            cout << "Bob" << e;
        else
            cout << "Alice" << e;
    }
    return 0;
}

// we simply need to check if the sum is divisible by 2 and to check that
// we can use modulo operator , if remainder is 0 then it is divisible else
// not divisible and if divisible print bob else print alice