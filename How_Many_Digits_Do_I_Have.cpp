#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, n;
    // 	cin>>t;
    while (t--)
    {
        cin >> n;
        if (n < 10)
            cout << 1 << e;
        else if (n >= 10 && n < 100)
            cout << 2 << e;
        else if (n >= 100 && n < 1000)
            cout << 3 << e;
        else
            cout << "More than 3 digits" << e;
    }
    return 0;
}

// if the number lies in the the given range then print according to the length of digit