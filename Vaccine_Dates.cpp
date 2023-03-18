#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, d, l, r;
    cin >> t;
    while (t--)
    {
        cin >> d >> l >> r;
        if ((d >= l) && d <= r)
            cout << "Take second dose now" << e;
        else if (d < l && d < r)
            cout << "Too Early" << e;
        else
            cout << "Too Late" << e;
    }
    return 0;
}

// In this question we only need to apply the condition which is given in the question
// Not much of explanation needed