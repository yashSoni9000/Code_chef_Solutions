#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    f(100)
    {
        cin >> a;
        if (a < 100)
        {
            if (a == 42)
                break;
            cout << a << e;
        }
    }
    return 0;
}

// basic if statement problem
//  the number needs to be under 100
//  also if a number is 42 then break