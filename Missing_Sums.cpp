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
        int i = 1;
        while (n--)
        {
            cout << i << " ";
            i += 2;
        }
        cout << e;
    }
    return 0;
}

// in this question codechef have given us different sample inputs to confuse us
// the meaing of solution is lets say input is 4 then first number is 1 then 2 is
// not possible as 1+1 is 2 now let's take 3 so there is no way of getting 3 from
// only 1 hence 3 is also added now 4 is possible as 3+1 =4 so 4 not put in array
// 5 can be put in array as there is no way of possible combinations
// so our ans is to print odd number