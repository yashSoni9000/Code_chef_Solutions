#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
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
        int count = 0;
        string s;
        int a[26] = {0};
        f(n)
        {
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                if (a[s[j] - 'a'] == i)
                    a[s[j] - 'a']++;
            }
        }
        f(26)
        {
            if (a[i] == n)
                count++;
        }
        cout << count << e;
    }
    return 0;
}

// This question was more of mentally thinking
// we are givn a string in which the charcters can repeat
// here we only need one of each character present in that string
// rest of the repeated char are of not use so for that i implemented
// a condidtion if (a[s[j] - 'a'] == i) which check for i=0 so that means
// the array is empty so we will increment that char . If that char is repeated
// then conditions is false say abaa so for first time all the array has 0 value
// also i =0 so we increment value of a to 1 now if a again apperars then its value is
// 1 not zero hence the condition do not run therefor we get ecactly one char incremented
// for each string so we can say that at the end of all string it should be the exactly
// the same as the number of string