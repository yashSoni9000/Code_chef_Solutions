#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x % 10 == 0)
            cout << 0 << e;
        else if (x % 5 == 0)
            cout << 1 << e;
        else
            cout << -1 << e;
    }
    return 0;
}

// we need to understand that in this question only 3 answers are possible i.e 0,1,-1
// resason is that lets say we take a number 9
//  no matter how many times we multiply it by 2 the number can not be divisible by 0
// you can try on calculator when only possible numbers are 10 and 5 on which multiplying by 2
// gives a number which is divisible by 10 therefore if the number is divisible by 10 then we print 0
//  else if number is divisible by 5 we print 1 as it will take only one step i.e. 5*2=10
// else we print -1