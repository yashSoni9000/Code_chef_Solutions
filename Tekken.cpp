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
        int health = min(b, c);
        b -= health;
        c -= health;
        health = max(b, c);
        if (health >= a)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// In the given question b and c are the deciding factors whether  a will have
// positive health or not
// positive means number must be greater than 0

// now if we make fight b and c first by min(b,c) and subtracting in both of them
// we then  and then we check if either of b or c has more or equal health remaining
// than a if yes then a will not have a positive health remain after the battle
// hence print no else we print yes