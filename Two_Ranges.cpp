#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        int arr[9] = {0}, count = 0;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= b; i++)
            arr[i]++;
        for (int i = c; i <= d; i++)
        {
            if (arr[i] == 1)
                continue;
            else
                arr[i]++;
        }
        for (int i = 1; i < 9; i++)
        {
            if (arr[i] == 1)
                count++;
        }
        cout << count << e;
    }
    return 0;
}

// Here in this question I have manually implemented the set property of STL which make is clear for
// understanding purpose. First we took an array of 9 elements (as index starts from 0) with all elements as 0
// now we take the first range and iterate it throught the array where we increase the index of that number
// say range is 1 to 3 then the arr[1] will be incremented from 0 to 1 and so on
// now for the second range we again iterate but with a slight condition in it where we check if the number is
// already incremented then we skip it else we increment it
// and to calculate how many are increments we again iterate a loop over the array and increment the count vaiable
// every time an incremented value is met and then we print the count variable
// Here we can use set but its a bit slower in comparison to array so I used this method