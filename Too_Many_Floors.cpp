#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        cin >> x >> y;
        int i = 0, j = 0;
        while (a[i] < x)
        {
            i++;
        }
        while (a[j] < y)
        {
            j++;
        }
        i = abs(i - j);
        cout << i << e;
    }
    return 0;
}

// we solved this using 2 pointers
// if the given number is greater than array  number we increment it