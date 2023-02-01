#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        int count = 0;
        if (x >= 2)
            count++;
        if (y >= 2)
            count++;
        if (z >= 2)
            count++;
        if (count > 2)
            cout << "YES" << e;
        else if (count == 2 && (x >= 3 || y >= 3 || z >= 3))
            cout << "YES" << e;
        else if (count == 1 && (x >= 4 || y >= 4 || z >= 4))
            cout << "YES" << e;
        else
            cout << "NO" << e;
    }
    return 0;
}

// here I could have taken a better approach where and used a litte bit more brain
// that we need atleast 6 choclates to distribute them as per the given condtions so
// the sum of the choclates must be greater than or equal to 6
// I have used another appoach where I checked the number of 2's are appearing more than 3 times else if they appear only 2 times then atleast one
// of them should be greater than 3 to satisfy the conditions same goes with if the
// count does only 1 time then any one of the number should have more than 4 choclates