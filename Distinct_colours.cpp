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
        int a[n];
        f(n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[n - 1] << e;
    }
    return 0;
}

// you can check by making a sample input like:
//  3
//  3 5 6
//  solution
//  1 1 1
//  2 2 2 2 2
//  3 3 3 3 3 3
//  so the number of pair uniquely made is 6
//  in vertical direction , therefore the max element
//  in the array will be our answer