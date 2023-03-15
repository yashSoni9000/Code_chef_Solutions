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
        int arr[n], max = 0, temp;
        f(n) cin >> arr[i];
        f(n)
        {
            temp = arr[i] + arr[(i + n - 1) % n];
            if (temp > max)
                max = temp;
        }
        cout << max << e;
    }
    return 0;
}

// lets take example to get it better
// 1 3 5 7
// now according to my solution
// temp=(arr[0]+arr[(0+4-1)%4])
// temp=1+arr[3%4]
// temp=1+arr[3]=1+3=4
// if(4>0) max=4;
// similarly we can do rest of the elements of array