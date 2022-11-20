#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int a[n], count = 0, num = 0;
        f(n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        f(n)
        {
            if (a[i] > num)
            {
                count++;
                num = a[i];
            }
        }
        if ((n - count) < x)
        {
            n -= count;
            x -= n;
            count -= x;
        }
        cout << count << e;
    }
    return 0;
}

// here we used brute force apporach
// we first sorted the array as the given candies sequence might not be arranged lexicographically
// sorting makes easier to keep count of unique flavour of toffee that sabrina can attain
// we first allot all the unique toffee to sabrina

// then we check if the difference between max candies and sabrina's candies is less than x the we can say that
// her brother didn't got his share's choclate so we will add choclates from sabrina's unique choclates and then
// print the remaining choclates of sabrina