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
        int a, count = 0;
        f(n)
        {
            cin >> a;
            if (a >= 10 && a <= 60)
                count++;
        }
        cout << count << e;
    }
    return 0;
}

// this question was of basic if else statement
// also take a note that we do not need to
// store the ages of women in array as we do not
// use them so just applied conditon and solve it