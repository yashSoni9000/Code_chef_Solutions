#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, day;
    cin >> t;
    while (t--)
    {
        int sun = 0, rain = 0;
        f(7)
        {
            cin >> day;
            if (day == 1)
                sun++;
            else
                rain++;
        }
        if (sun > rain)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// basic if else statement , one thing to note is that we do
// not need to store the value of days  in array we can check
// during the input only this will save the space complexity
// in this question we just need to check if the no of sunny
// days is greater than rainy day which we can use the count
// type variable and increment and check if no. of rainy days
// are less than sunny days