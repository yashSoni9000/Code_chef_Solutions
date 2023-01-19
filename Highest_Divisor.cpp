#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, n;
    // 	cin>>t;
    while (t--)
    {
        cin >> n;
        for (int i = 10; i > 0; i--)
        {
            if (!(n % i))
            {
                cout << i << e;
                break;
            }
        }
    }
    return 0;
}

// we need to find the divisor in range [1,10] so we take loop of 10 where we start from 10 and check all the way up to 1
// if a number is divisible during the process we print it and exit the loop else
// keep going on till 1