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
        string s, temp = " ";
        cin >> s;
        for (int i = 0; i < s.length(); i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                temp += 'A';
            else if (s[i] == '0' && s[i + 1] == '1')
                temp += 'T';
            else if (s[i] == '1' && s[i + 1] == '0')
                temp += 'C';
            else
                temp += 'G';
        }
        cout << temp << e;
    }
    return 0;
}

// We need to first focus that we are given a binary string not a
// number so we need to first use string to store the string
// then we need to check in pairs so we created a loop which inrement
// +2 every time so that we can check for pairs
// and at the end we check the conditions if true then we add respsective
// character to our answer string and print it