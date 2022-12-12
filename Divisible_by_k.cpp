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
        ll k, num1, num2, temp = 1;
        bool exist = false;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> num1;
            num1 *= temp;
            temp = num1 % k;
            if (temp % k == 0)
                exist = true;
        }
        if (exist)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// here we need a subset which is divisible by k so one would think to
// multiply all the number and check if the multiplied number is divisible
// by k , but we need to take a look at the constraints which are too big
// to store multiplication of 100's of number of 10^9 so instead we need to
// take modulo of each number in the array and then again multiply that modulo
// with next coming modulo , to get our required answer