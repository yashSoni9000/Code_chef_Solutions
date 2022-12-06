#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        double salary, da = 0.98;
        cin >> salary;
        if (salary < 1500)
            cout << fixed << setprecision(2) << salary * 2 << e;
        else
        {
            da *= salary;
            salary += 500;
            da += salary;
            cout << fixed << setprecision(2) << da << e;
        }
    }
    return 0;
}

// This question was to get the knowledge of decimal precision
// here we had to make it correct upto 2 decimal precision so we used
// set precision rest is the base logic