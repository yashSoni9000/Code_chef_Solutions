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
        int cCount = 0, nCount = 0;
        string s;
        cin >> x >> s;
        f(14)
        {
            if (s[i] == 'C')
                cCount++;
            if (s[i] == 'N')
                nCount++;
        }
        if (cCount == nCount)
            cout << x * 55 << e;
        else if (cCount > nCount)
            cout << x * 60 << e;
        else
            cout << x * 40 << e;
    }
    return 0;
}

// Here we only need frequency of carlsen count and chef count and then on their wins
// we compare both of them and decides who has won more game .
// we DO NOT need to multiply by 2 in order to get the points of player we can simply
// determine that by checking who has won most matches and print accordingly
// One more thing to note is that we need print the amount of money carsen get
// and we are intersted in him only so we print his part of money only