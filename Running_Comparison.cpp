#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0, alice[n], bob[n];
        f(n) cin >> alice[i];
        f(n) cin >> bob[i];
        f(n)
        {
            if (alice[i] * 2 >= bob[i] && alice[i] <= bob[i] * 2)
                count++;
        }
        cout << count << e;
    }
    return 0;
}

// first we store them in array and check the given condition
// the condition is if both are happy then only we print add to our count
// now the conditions are that if on that day if alice runs twice more than bob than bob
// is unhappy and visa versa  we need to check where both are happy
// eg
// 200 for alice and 300 for bob
// now applying the condition 200*2=400 >= 300 and 200 <= 300*2=600 both condition are true
// hence both are happy and we increase the count