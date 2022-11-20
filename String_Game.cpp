#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        string s;
        int a[26] = {0}, condition, f = 1;
        cin >> s;
        if (n & 1)
            cout << "NO" << e;
        else
        {
            f(n) a[s[i] - 'a']++;
            f(26)
            {
                condition = a[i] & 1;
                if (condition == 1)
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
                cout << "NO" << e;
            else
                cout << "YES" << e;
        }
    }
    return 0;
}

// we need to find that the alphabet is present in a multiple of 2
// as the words will be divided among 2 people

// also if the length of string is an odd number there is no way
// the end strings can be equal so then we check for the even
// number of strings and do the above process