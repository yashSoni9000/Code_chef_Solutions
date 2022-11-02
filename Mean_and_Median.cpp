#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int n = -301;
        cout << n << " " << y << " " << 3 * x - y - n << e;
    }
    return 0;
}

// Here we were given the mean and nedian say x and y
// also assume the 3 number to find are a,b,c where b=y
// now we can say that(a+b+c)/3=x so a+b+c=x*3
// also a+y+c=x*3 so a+c=x*3-y so here I assumed the values
// since we are assuming the value of a so it should be less than
// y or b (condition given in question) so we must take value of a
// between -500 to -600 so we will get the following eqn
// c=x*3-y-(-500) so we can take out value of c
// lets say x=67 and y =100 so out c=701
// therefore a=-600 b=100 and c=701 if we take out mean of all these
// values then it will be equal to 67 which is req ans