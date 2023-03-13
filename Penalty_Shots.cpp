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
        int team1 = 0, team2 = 0;
        f(10)
        {
            cin >> n;
            if (i % 2 == 0 && n == 1)
                team1++;
            if (i % 2 == 1 && n == 1)
                team2++;
        }
        if (team1 == team2)
            cout << 0 << e;
        else if (team1 > team2)
            cout << 1 << e;
        else
            cout << 2 << e;
    }
    return 0;
}

// Since we are given scores of the respective teams alternative we loop over them and check
// if the index is even and there is a goal (goal represent 1) we increase the score of team 1 by 1
// similarly we do with team 2 but with odd index

// I used an integer as we do not need array to store the values and use it afterwards once it has been used
// eg
// 0 0 0 1      1       0 1         1       1       0
// - - - team2  team1   - team1     team2   team1   -
// we can see that both scored equal goals so 0 is ans