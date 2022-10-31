#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int max_value(int a, int b, int m)
{
    int ans;
    if (a < b)
    {
        if ((a - b) <= m)
        {
            ans = m + (a - b);
            ans = a + b + ans;
        }
        else
        {
            double a1 = a, b1 = b;
            ans = ceil(a1 / b1);
            ans *= m;
            ans -= abs(a - b);
            ans = a + b + ans;
        }
    }
    else if (a >= b)
        ans = a + b + ((a - b) % m);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n] = {0}, maxi = 0, smax = 0, ans = 0;
        f(n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        f(n)
        {
            if (a[i] > maxi)
            {
                smax = maxi;
                maxi = a[i];
            }
        }
        ans = max(max(max_value(maxi, maxi, m), max_value(maxi, smax, m)), max(max_value(smax, maxi, m), max_value(smax, smax, m)));
        cout << ans << e;
    }
    return 0;
}

// Here in this question I have taken the inputs
// sorted the elements in the array
// then give maximum and second maximum elemnent in the array
// here we found the max values using permutation of max and second max values
// which was given the question
// there was a special condition of negative number modulus which i had solved seperately
// and found the max ans