#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, p, q;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> p >> q;
        x += (p * 10);
        y += (q * 10);
        if (x == y)
            cout << "DRAW" << e;
        else if (x < y)
            cout << "CHEF" << e;
        else
            cout << "CHEFINA" << e;
    }
    return 0;
}

// we need to simply follow what is given in test cases which helps in solving this question
// each wrong answer cost 10 min each question and we are given total amount of minutes which we
// add to the total minutes taken , if the number are equal then we print draw
// else if x<y the we can say that chef is more effieinct than y
