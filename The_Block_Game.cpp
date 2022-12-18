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
        int rev_num = 0, remain = 0, duplicate;
        duplicate = n;
        while (duplicate != 0)
        {
            remain = duplicate % 10;
            rev_num = rev_num * 10 + remain;
            duplicate /= 10;
        }
        if (rev_num == n)
            cout << "wins" << e;
        else
            cout << "loses" << e;
    }
    return 0;
}

// we need to check if the number is palindrome or not if yes then print wins
// else print loses