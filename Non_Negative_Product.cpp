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
        int arr[n], count = 0;
        f(n) cin >> arr[i];
        f(n)
        {
            if (arr[i] == 0)
            {
                count = 0;
                break;
            }
            else if (arr[i] < 0)
                count++;
        }
        if (count % 2 == 0)
            cout << 0 << e;
        else
            cout << 1 << e;
    }
    return 0;
}

// in this question we do not need to multiply all the elements of the array
// we have to check if there is a 0 in the array we print 0 else if negative numbers are
//  are present even number of times we print 0 else print 1