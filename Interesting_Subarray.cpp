#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], minum = INT_MAX, maxnum = INT_MIN, num1, num2, num3;
        f(n)
        {
            cin >> a[i];
            if (a[i] > maxnum)
                maxnum = a[i];
            if (a[i] < minum)
                minum = a[i];
        }
        num1 = maxnum * maxnum;
        num2 = minum * minum;
        num3 = minum * maxnum;
        cout << min({num1, num2, num3}) << " " << max({num1, num2, num3}) << e;
    }
    return 0;
}

// this question was a tough nut to crack for me
// here we have to fine interesting max and min values
// we first find out max and min elements from the array
// then we stored maximum and min number combinations in 3 seperate varaibale
// lets say number are 8 -9 2 5
// here we get minum and maxnum as -9 and 8 respectively
// now we multiplied the combinatin of these 2 numbers
// we get num1=68 num2=81 and num3=-72
// so we printed first min of these values and the printed max of these values
// that gives the answer