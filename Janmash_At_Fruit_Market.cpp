#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> x >> a >> b >> c;
        int arr[] = {a, b, c};
        sort(arr, arr + 3);
        cout << ((arr[0] * (x - 1)) + arr[1]) << e;
    }
    return 0;
}

// here we are given that we have unlimited supples of given 3 fruits
// and we also need exactly 2 types of fruits and a total of x fruits
// so to minimise the least amount of money need to buy x-1 amount of fruits of min cost
// and other of second lowest cost so that our amount is minimum

// to get the smallest and second smallest price i put 3 fruits price in array
// and sorted to get the min and second min cost