#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, count = 0;
    cin >> n >> k;
    int a[n];
    vector<int> v;
    f(n)
    {
        cin >> a[i];
    }
    f(n)
    {
        if (a[i] < 0 && i + 1 <= n)
        {
            a[i] = abs(a[i]);
            v.push_back(i + 1);
            if (a[i + 1] < 0)
                a[i + 1] = abs(a[i + 1]);
            else
                a[i + 1] = 0 - a[i + 1];
            count++;
        }
    }
    cout << count << e;
    for (auto i : v)
        cout << i << " ";
    cout << e;
    return 0;
}
// we used brute force approach i.e we implemented what the question asked for directly
// we took an array and checked if that current location is negative and also that position is not greater than n
// we give abstract value to that element using abs()

// and give the index of that element to new array or vector
// also check if next element is also negative then we do not need to push it in vector instead we give it the abs() value
// if next element is positive then we make it negative