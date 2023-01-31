#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        if (!(k % 2))
            cout << k << e;
        else
            cout << k + 2 << e;
    }
    return 0;
}

// we first need to observe for multiple cases let's say for 1 sec so in 1 sec faizal will go 3 steps ahead so our ans is 3
// now lets take k=2 sec here he moves 3 steps forward in 1st second and one step
// back in 2nd second so total steps is 2 which is equal to the number of seconds
// now take k=3 so he moves 3 steps in 1st second one step back in 2nd second and
// again 3 steps ahead in 3rd second in a total of 5 steps which is 2 more than
// given second , we can continue the pattern and say that if the number of
// second is even then we print the even number as total steps else we add 2 in the number
// of second
// the line 16 checks if the number is even or odd if even the answer is 0 so we used
// not(!) operator to work when the condition is true else we do other condition