#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, ans = " ";
        cin >> s >> t;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[i])
                ans += 'G';
            else
                ans += 'B';
        }
        cout << ans << e;
    }
    return 0;
}

// we need to check if both strings at same index have same values or not
// if yes then add 'g' to string else add 'b'