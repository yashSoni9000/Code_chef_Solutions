#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int max, min;
        if (a == b)
            cout << "YES" << e;
        else
        {
            if (abs(a - b) % 2 == 1)
                cout << "NO" << e;
            else
                cout << "YES" << e;
        }
    }
    return 0;
}

// Here in the given question lets always take the value of d as 1 for easier
// solving purpose , now take 1 and 2 if 1 is incremented by d i.e. +1 and 2 decremented by d i.e -1
// then our number are 2 and 1 and no matter what we do we will not be able to make them equal
// now take a and b as 1 and 3 respectively and d=1 now we make make them equal by adding 1
// to a and subtracting 1 to b we get 2 in both conditon then we can print yes
// if we take 1 and 4 as a and b then again we run into the 1 and 2 problem
// 1 incremented and 4-1 then 2+1 and 3-1 which give a=3 and b=2 which proves we can not make them equal
// so we can conclude that if the difference of a and b is odd the we can no make them equal
// if difference is even then we print yes