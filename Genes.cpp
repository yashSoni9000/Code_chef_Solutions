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
        char color1, color2;
        cin >> color1 >> color2;
        if (color1 == 'R' || color2 == 'R')
            cout << 'R' << e;
        else if (color1 == 'B' || color2 == 'B')
            cout << 'B' << e;
        else if (color1 == 'G' && color2 == 'G')
            cout << 'G' << e;
    }
    return 0;
}

// we need to check if "R" exists then we directyl print "R"
// as "R" is more prominent to occur , same goes with "B" as well
// after cheking "R" and "G" will only show up if both have "G"