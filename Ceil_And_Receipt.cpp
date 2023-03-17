#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p;
    cin >> t;
    while (t--)
    {
        int arr[] = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1}, count = 0;
        cin >> p;
        f(12)
        {
            while (p >= arr[i])
            {
                count++;
                p -= arr[i];
            }
        }
        cout << count << e;
    }
    return 0;
}

// This one was hard for me to figure out and solved it just by observing test cases
// and checking other solutions