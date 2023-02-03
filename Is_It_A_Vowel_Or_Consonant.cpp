#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // 	cin>>t;
    while (t--)
    {
        char c;
        cin >> c;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            cout << "Vowel" << e;
        else
            cout << "Consonant" << e;
    }
    return 0;
}

// we need to take input in char datatype and check if the input char matches vowels if yes print Vowel else print consonant