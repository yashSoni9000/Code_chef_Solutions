#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++)
            if ((i % 10) == 2 || (i % 10) == 3 || (i % 10) == 9)
                count++;
        cout << count << e;
    }
    return 0;
}

// we need to find numbers which ends with 2,3 and 9 between the given l and r
// so we make a loop which goes through each number and check if the last digit is
// among those 3 numbers . To get the last digit we take modulus which gives the last digit