#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int a[n];
        f(n) cin >> a[i];
        sort(a, a + n);
        cout << a[n - x] - 1 << e;
    }
    return 0;
}

// In this question all the students in the class and their respective numbers
// we are also given how many students have passed, in question we have that all the marks are distinct
// we can use that info to sort the array and use it as follows
// then we sort the array we will get the highest scored marks of the student
// and based on the x we will traverse through the array from back side till
// x times which means x students have passed so the last passed student -1 is the passing marks
// ex given array 15,70,100,31
// sort it
// 15,31,70,100
// now from back side we need 3 students who have passed which are 100,70 and 31
// so 31 is strictly greater than passing marks so 31-1 is the answer
// in my answer instead of traversing i simply printed the number -1
// we can get the index of that number n-x therefore we printed that number -1