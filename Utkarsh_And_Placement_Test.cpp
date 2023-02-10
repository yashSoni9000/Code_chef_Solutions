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
        char a[3], x, y;
        f(3) cin >> a[i];
        cin >> x >> y;
        f(3)
        {
            if (a[i] == x || a[i] == y)
            {
                cout << a[i] << e;
                break;
            }
        }
    }
    return 0;
}

// Note : here i could have taken the alphabets in char but i didnt wanted to write long
// condtions so i used array
// In this question I traversed throught the array and checked if the array element
// is among the 2 companies (x and y) we print that company.
// This is because we need to print the first apparance of the company in which
// utkarsh got selected so we traversed in the array and checked the condion on line 20