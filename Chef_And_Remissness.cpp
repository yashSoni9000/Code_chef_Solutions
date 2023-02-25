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
        cout << max(a, b) << " " << a + b << e;
    }
    return 0;
}

// suppose count of each guard is 19 19 then we can say that either both have seen
// chef 19 times or when one guard was sleeping chef goes 19 times
// and when other guard sleeps he again came 19 times to total of 19+19
// we can also say that when both were awake chef has gone in 19 times so
// at min chef has gone 19 times and at max 38 . Similarly we can apply it to other cases as well