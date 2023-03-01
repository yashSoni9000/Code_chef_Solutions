#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int sumBefore = 0, sumAfter = 0, arr[n] = {0};
        f(n) cin >> arr[i];
        f(n) sumBefore += arr[i];
        f(n) if (arr[i] > k) arr[i] = k;
        f(n) sumAfter += arr[i];
        cout << sumBefore - sumAfter << e;
    }
    return 0;
}

// Question is straight forward we first need to find the original price total
// then we iterate through the array and check if there is a number greater than k
// if yes then we replace that number with k as mentioned in the question
// then finally we again total the new array and check the difference from the
// original array and mutated array and print the difference