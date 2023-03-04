#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        b -= a;
        b %= 3;
        if (b == 2)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// this question was based on observation that we have to check the difference
// between given 2 numbers when the subtracted number is %3 we get 3 results
// 0,1,2 if the remainder is 2 then  it is not possible to make them equal .I have check it
// on multiple random test cases so if you try it you will get what i am saying