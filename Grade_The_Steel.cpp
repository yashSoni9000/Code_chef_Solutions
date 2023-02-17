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
        double hard, carbon, strength;
        bool hardPresent = false, carbonPresent = false, strengthPresent = false;
        cin >> hard >> carbon >> strength;
        if (hard > 50)
            hardPresent = true;
        if (carbon < 0.7)
            carbonPresent = true;
        if (strength > 5600)
            strengthPresent = true;
        if (hardPresent && carbonPresent && strengthPresent)
            cout << 10 << e;
        else if (hardPresent && carbonPresent)
            cout << 9 << e;
        else if (carbonPresent && strengthPresent)
            cout << 8 << e;
        else if (hardPresent && strengthPresent)
            cout << 7 << e;
        else if (hardPresent || carbonPresent || strengthPresent)
            cout << 6 << e;
        else
            cout << 5 << e;
    }
    return 0;
}

// Here we need to check if the given input satisfies condition so for that we will
// take input and then make a bool datatype for each property of carbon and if it satisfies given
// condition then we assign it with true then we check the grading system from 5 to 10
// and put the property bool datatype in the given conditions and print accordingly