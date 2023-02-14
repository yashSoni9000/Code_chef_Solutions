#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, year;
    cin >> t;
    while (t--)
    {
        cin >> year;
        if (year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019)
            cout << "HOSTED" << e;
        else
            cout << "NOT HOSTED" << e;
    }
    return 0;
}

// if the given input number is among the given year then print HOSTED else NOT