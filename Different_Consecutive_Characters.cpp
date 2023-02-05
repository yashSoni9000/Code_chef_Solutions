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
        string s;
        int count = 0;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            if (s[i] == s[i - 1])
                count++;
        cout << count << e;
    }
    return 0;
}

// I started the loop from second position of the given string and checked with its
//  previous string if it matches then I increase the count as the current and previous string is same and
//  Insertion needs to be performed of either 0 or 1 between those two same number according to the
//  need of the question
//  Take a look at the example
//  string of length 9 and string is 001001111
//  here the second character is 0 and we check if it matches with the previous char which is also 0
//  so we increase the count as we need to put a 1 in it
//  now comes the 1 character , we compare it to prev char which is 0 and not matching the condition so
//  we skip it and similarly we do rest of the characters till the length of the string