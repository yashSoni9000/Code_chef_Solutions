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
        if (x > 0 && x < 100)
            cout << "Easy" << e;
        else if (x >= 100 && x < 200)
            cout << "Medium" << e;
        else
            cout << "Hard" << e;
    }
    return 0;
}

// given rating of problem x we just need to print the respectice categories according
// to the given condition