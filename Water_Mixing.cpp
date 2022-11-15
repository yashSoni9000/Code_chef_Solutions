#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, initemp, reqtemp, hotwtr, cldwtr, temp;
    cin >> t;
    while (t--)
    {
        cin >> initemp >> reqtemp >> hotwtr >> cldwtr;
        if (initemp < reqtemp)
        {
            temp = reqtemp - initemp;
            if (temp <= hotwtr)
                cout << "YES" << e;
            else
                cout << "NO" << e;
        }
        else if (initemp > reqtemp)
        {
            temp = initemp - reqtemp;
            if (temp <= cldwtr)
                cout << "YES" << e;
            else
                cout << "NO" << e;
        }
        else if (initemp == reqtemp)
            cout << "YES" << e;
    }
    return 0;
}

// basic question of if else statement
// one thing i learned from it is to
// when to store in a new variable and when not :)