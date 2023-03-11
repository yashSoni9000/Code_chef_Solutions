#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        a += b + c;
        if (a == 0 || a == 3)
            cout << 0 << e;
        else
            cout << 1 << e;
    }
    return 0;
}

// the question is we are given 3 shoes condition i.e. either they are of right(represented by 1)
// or they are left (represented by 0) so we need to check that there must be atleast one '1' and
// one '0' is present in order to complete its pair
// eg
// 0 0 0  ->not possible as no right shoe is present
// 0 0 1  -> possible as both shoe are present, 0 and 1
// 0 1 0  -> possible as both shoe are present, 0 and 1
// 0 1 1  -> possible as both shoe are present, 0 and 1
// 1 0 0  -> possible as both shoe are present, 0 and 1
// 1 0 1  -> possible as both shoe are present, 0 and 1
// 1 1 0  -> possible as both shoe are present, 0 and 1
// 1 1 1  -> not possible as no left shoe is present

// so we can observe that if the sum is either 0 or 3 then its not possible
// else we can use both shoe hence the logic that if the sum is 3 or 0
// we print 0 else print 1