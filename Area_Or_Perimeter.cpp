#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, length, breadth, area, peri;
    // 	cin>>t;
    while (t--)
    {
        cin >> length;
        cin >> breadth;
        area = length * breadth;
        peri = 2 * (length + breadth);
        if (area == peri)
            cout << "Eq" << e << area << e;
        else if (area < peri)
            cout << "Peri" << e << peri << e;
        else if (area > peri)
            cout << "Area" << e << area << e;
    }
    return 0;
}

// we simply need to calculater the area and peri and check if area is greater
// than peri the print area else if equal the print equal and either area or peri