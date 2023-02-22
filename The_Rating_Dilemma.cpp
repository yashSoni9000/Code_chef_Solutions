#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << 0 - (n + 1) << e;
    }
    return 0;
}

// carefully observe the constraints of the sum of x and y . It is always greater than 0 which means that x
// is always greater than y as the number is positive and x is greater than 0 and y is less than 0 , so x>y .
// Now, as output we need the max product of those 2 numbers x and y so we can safely say that our answer is
// going to be negative as x is positive and y is negative. Now for the answer if we take any value of y then
// we have to calculate each one of the product of x and y which is not feasible so we simply take y = -1 so
// that we can easily find the product. In our case is our sum is 0 then product is -1*1 which is -1 and
// also the sum is 0. So , now we can see that our answer is always +1 in negative terms as y is multiplied to
// it which is < 0 so we get our answer