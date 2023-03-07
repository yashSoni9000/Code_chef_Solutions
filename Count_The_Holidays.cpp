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
        int a, ans = 8;
        cin >> n;
        f(n)
        {
            cin >> a;
            if (a % 7 != 6 && a % 7 != 0)
                ans++;
        }
        cout << ans << e;
    }
    return 0;
}

// we are sure that there will be at least 8 holidays of saturday and sunday
// that is a toal of 8 now if an other holiday appears on other day we add it to holidays
// by the condition at line no 18 which states that other than remainder 6 and 0 rest all the other
// days are not saturday or sunday