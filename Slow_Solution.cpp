#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, maxT, maxN, sumN;
    cin >> t;
    while (t--)
    {
        cin >> maxT >> maxN >> sumN;
        int t = sumN / maxN;
        int r = sumN % maxN;
        if (t < maxT)
            cout << t * maxN * maxN + r * r << e;
        else
            cout << maxT * maxN * maxN << e;
    }
    return 0;
}

// first we find the number of test cases and then we get the remainder of
// sumN and maxN to get the reamaing N of the question
// now we check if t is less than the given test cases maxT then we multiply
// maxN^2 with the new t test case with the remainder square added
// else we print the multiplicaiton of the given test cases with the maxN