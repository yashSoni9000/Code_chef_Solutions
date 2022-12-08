#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        n *= 2;
        n -= x;
        cout << n + 1 << e;
    }
    return 0;
}

// we need to subtract chef's roll number from
// total students in class add 1 to it to complete indexing