#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, meliodasChoclate, banChoclate;
    cin >> t;
    while (t--)
    {
        cin >> meliodasChoclate >> banChoclate;
        int minNum = min(meliodasChoclate, banChoclate);
        int maxNum = max(meliodasChoclate, banChoclate);
        if (maxNum % minNum == 0)
            cout << minNum + minNum << e;
        else
        {
            int hcf = __gcd(maxNum, minNum);
            if (hcf != 1)
                cout << hcf + hcf << e;
            else
                cout << 2 << e;
        }
    }
    return 0;
}

// this question was for observation
// if you see that if the min of two number is modulo with greater number and ans =0 then the min num
// will be the amount of choclate that each of them have
// else if they do not have anything in common then there always be one remaining for each of person
// else they have multiple thing in common so we will find the HCF of those two number so we will
// get the required result :)