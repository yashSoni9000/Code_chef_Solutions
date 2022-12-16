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
        if (x < 35)
            cout << "Underload" << e;
        else if (x >= 35 && x <= 65)
            cout << "Normal" << e;
        else
            cout << "Overload" << e;
    }
    return 0;
}

// basic if else statement where we need to check the middle condition
// as 35 and 65 both are included we need to get a number which is between
// those two numbers then its normal