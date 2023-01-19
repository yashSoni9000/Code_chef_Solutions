#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1 || n == 3 || n == 5)
            cout << "NO" << e;
        else
            cout << "YES" << e;
        // else cout<<"NO"<<e;
    }
    return 0;
}

// you need the following condition to check if num is represented by sum of 2 and 7
// if((num%2)==0||(num%7)%2==0)
// if this condtion is true then it satisfies condition most part but lets
// say we have 57 which does not satisfy the above condition but it can be filled
// with 7*7+2*4 hence we can conclude that all numbers except 1,3,5 can be repersented in this form