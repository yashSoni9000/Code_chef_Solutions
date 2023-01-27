#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m, h;
    cin >> t;
    while (t--)
    {
        cin >> m >> h;
        float BMI;
        BMI = (float)m / (h * h);
        if (BMI <= 18)
            cout << 1 << e;
        else if (BMI > 18 && BMI <= 24)
            cout << 2 << e;
        else if (BMI > 24 && BMI <= 29)
            cout << 3 << e;
        else
            cout << 4 << e;
    }
    return 0;
}

// we need to calculate BMI using the given formula and check if the bmi is less than
// 18 print 1 else less than 24 print 2 else less than 29 print 3 else print 4
// I could also had taken the BMI in integer as its mentioned that h^2 divides m
// so we do not need to take care of folating point values