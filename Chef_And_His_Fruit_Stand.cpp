#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (y >= x)
            cout << x / 2 << e;
        else
        {
            if ((2 * y) <= x)
                cout << y << e;
            else
                cout << x / 2 << e;
        }
    }
    return 0;
}

// Here I used brute force method to get answer
// I checked if number of apples are larger than banana the we simply print
// half the numbers of banana as given in the question a dish can be made of
// 2 banana and 1 apple so in our case we have sufficient amount of apple
// but not banana so we only take number of banana/2
// second case is when apples are less than banana now we check if again we have
// surplus amount of apples if yes then we simply print banana/2 else
// apples are insufficent here hence we print directly the number of apples