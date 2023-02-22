#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << n / 7 + (n % 7 == 6 ? 1 : 0) << e;
    }
    return 0;
}

// we get the number of saturday by dividing n by 7
// now we observe that if n%7 ==6 there is one more saturday
// coming so we add it to n/7 else we reject it