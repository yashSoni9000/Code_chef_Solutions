#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin >> t;
    while (t--)
    {
        double ans1, ans2;
        cin >> i >> j;
        ans1 = sqrt((j * j) - (i * i));
        ans2 = sqrt((j * j) + (i * i));
        cout << ans1 << " " << ans2 << e;
    }
    return 0;
}

// Here we are given two sides of a triangle and we are given 2 sides i.e. bottom (b) and left side (ls)
// and we are also given that the right side (rs) is vertical so we can say that the given triangle is right angled
// so we can apply pythagorous theorm considering 1) b and ls as length and hypotenuse to find the min length of the
// rs and to find maxlength we add b and ls and then print those answer