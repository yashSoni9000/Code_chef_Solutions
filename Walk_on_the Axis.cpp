#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, numnberOfLights, distanceWalked;
    cin >> t;
    while (t--)
    {
        cin >> numnberOfLights;
        distanceWalked = numnberOfLights + (numnberOfLights * (numnberOfLights + 1) / 2);
        cout << distanceWalked << e;
    }
    return 0;
}

// main is the observation and storing the numbers in calculation
// here is a basic representation of question
// 0,1,2,3,4,5,6......n
// lets say test case is 5
// then distance = 5+5+4+3+2+1;
//  so ans = no of lights plus sum of n natural numbers
// since we have sum of n natural numbers so we have to store it in a
//  larger variable like long long