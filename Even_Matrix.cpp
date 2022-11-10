#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        int q = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (!(n & 1) && (i & 1))
            {
                k = q - 1 + n;
                for (int j = 0; j < n; j++)
                    cout << k-- << " ";
                q = k + 1 + n;
            }
            else
                for (int j = 0; j < n; j++)
                    cout << q++ << " ";
            cout << endl;
        }
    }
    return 0;
}

// the answer is correct but for some reason code chef is not
// accepting the solution of if