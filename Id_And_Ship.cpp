#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "b" || s == "B")
            cout << "BattleShip" << e;
        else if (s == "c" || s == "C")
            cout << "Cruiser" << e;
        else if (s == "d" || s == "D")
            cout << "Destroyer" << e;
        else
            cout << "Frigate" << e;
    }
    return 0;
}

// if you had a wrong answer then please check if you are printing the exact same string as mentioned
// otherwise we just need to check the given conditions and print the output