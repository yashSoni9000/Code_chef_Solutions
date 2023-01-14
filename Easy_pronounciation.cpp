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
        int streak = 0;
        string s;
        cin >> n >> s;
        f(n)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                streak = 0;
            else
            {
                streak++;
                if (streak >= 4)
                    break;
            }
        }
        if (streak >= 4)
            cout << "NO" << e;
        else
            cout << "YES" << e;
    }
    return 0;
}

// we need to check if the string has 4 consecutive consonats if yes then we exit the loop and print no
// else if a vowel is encountered then we reset the streak to 0 which means its easier to pronounce for next 4 word
// if next 4 words falls consecutively then we again exit the loop else we print yes