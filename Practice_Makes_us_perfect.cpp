#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, p;
    // 	cin>>t;
    while (t--)
    {
        int count = 0;
        f(4)
        {
            cin >> p;
            if (p >= 10)
                count++;
        }
        cout << count << e;
    }
    return 0;
}

// just created a basic loop and checked if input number is greater than 10
// then we increased the count and at the end printed the count