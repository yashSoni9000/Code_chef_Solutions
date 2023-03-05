#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p;
    cin >> t;
    while (t--)
    {
        cin >> p;
        cout << (p / 2) + 1 << e;
    }
    return 0;
}

// The question was of observation that no matter the points of chef
// the answer is always (p/2)+1 take 2-3 test cases and observe the pattern
// lets say chef scores 9 and 8 points in a random test case
// no of times chef will serve right when he has 10 points are (according to given rules)
//  9 8 7 6 5 4 3 2 1 0
//    1   1   1   1   1
// for 8 points
// 8 7 6 5 4 3 2 1 0
// 1   1   1   1   1

// you can see that there are 5 right side serves and case of 9 and 8 so we can say that
// our answer is (p/2)+1