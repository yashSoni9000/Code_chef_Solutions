#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        int n, num, eve = 0, od = 0;
        cin >> n;
        f(n)
        {
            cin >> num;
            if (num % 2)
                od++;
            else
                eve++;
        }
        if (eve > od)
            cout << "READY FOR BATTLE" << e;
        else
            cout << "NOT READY" << e;
    }
    return 0;
}

// we dont need to make an array to store the number of weapon instead we can take in
// a int variable and check if the number is even or odd if even then increase counter
// of even else go for odd counter and at the end check if even is strictly greater than
// odd if yes print ready else print not ready