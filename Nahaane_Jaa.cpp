#define ll long long
#define f(end) for (int i = 1; i < end; i++)
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
        ll k, temp, count = 0;
        cin >> n >> k;
        f(n)
        {
            cin >> temp;
            // if(k==temp && i!=n-1) flag=true;
            if (k == temp)
                count++;
        }
        cin >> temp;
        if (n == 1 && temp == k)
            count++;
        // if(count==n) flag==true;
        if (count)
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// In this question we had to spend time with the question first
//  we need that atleast the number k should be present in given array
//  secondly that the number k should not be present at last as there is no way
//  we can make all the elements of array to k . So we just need to check if it holds
//  true so we increment every time k appears that means we can make all the elements of
//  array to k . If there is only one element in the array and it is equal to k then it's
// already completed . One thing to note is that i have used macros in it and the loop at line
// 17 is starting from 1 to less than n and i am taking the last input after the loop to check
// the last condition that it should not be equal to k else it will not be possible to make all
// the elements of array to k