#define ll long long
#define f(end) for (int i = 0; i < end; i++)
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
        ll k, sum;
        cin >> n >> k;
        sum = n * (n + 1);
        sum /= 2;
        if (k < sum)
            cout << -1 << e;
        else
        {
            f(n - 1) cout << 1 << " ";
            cout << k - sum + 1 << e;
        }
    }
    return 0;
}

// we can observe that if we are given n elements say 3 then total no of continuous sub arrays are sum of natural numbers i.e. 6
// now we will check if the sum is greater than k then we will say its not possible else we will print 1 beause it will add one by
// one and at the last element we will print the k-sum+1 which will be out required answer