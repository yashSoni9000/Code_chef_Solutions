#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a < b && a < c)
            cout << "Draw" << e;
        else if (b < a && b < c)
            cout << "Bob" << e;
        else
            cout << "Alice" << e;
    }
    return 0;
}

// question of basic if else statement where we need to check if
// the first question is less than other 2 if yes then print respective
// person or draw