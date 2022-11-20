#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int day;
        ll taste, a[m + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> day >> taste;
            a[day] = max(a[day], taste);
        }
        sort(a, a + (m + 1));
        cout << a[m] + a[m - 1] << e;
    }
    return 0;
}

// This problem for me was an interesting one
// while taking the input for the days and taste i checked if that day already had a taste attached to it
// if so then i took the max of existing day's taste and the new input taste
// the above case was if the days were same
// if the days are not same them also the above condition works perfectly as i have initalized the arrray with 0

// therefore we will get only the new taste of that day