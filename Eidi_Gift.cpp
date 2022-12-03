#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        int age[3], eidi[18] = {0}, temp = 0, flag = 1;
        f(3) cin >> age[i];
        f(3)
        {
            cin >> temp;
            if (eidi[age[i]] != 0 && temp != eidi[age[i]])
                flag = 0;
            eidi[age[i]] = temp;
        }
        temp = 0;
        f(18)
        {
            if (eidi[i] != 0 && eidi[i] <= temp)
            {
                flag = 0;
                break;
            }
            if (eidi[i] != 0)
                temp = eidi[i];
        }
        if (flag == 1)
            cout << "FAIR" << e;
        else
            cout << "NOT FAIR" << e;
    }
    return 0;
}

// This problem i took a different approach where stored the money
// of each child in respective array and compared it to see if
// the condition breaks and if so then we use flag to makr it as
// unfair else its fair