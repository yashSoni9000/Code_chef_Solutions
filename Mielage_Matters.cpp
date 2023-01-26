#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x, y, a, b;
    cin >> t;
    while (t--)
    {
        float diesel, petrol;
        cin >> n >> x >> y >> a >> b;
        diesel = (float)n / b;
        // cout<<diesel<<" ";
        petrol = (float)n / a;
        // cout<<petrol<<" ";
        diesel = (float)diesel * y;
        // cout<<diesel<<" ";
        petrol = (float)petrol * x;
        // cout<<petrol<<" ";
        if (diesel > petrol)
            cout << "PETROL" << e;
        else if (diesel < petrol)
            cout << "DIESEL" << e;
        else
            cout << "ANY" << e;
    }
    return 0;
}

// by dividing the number of kilometer to total number of kilometer we can get the
// amount which can be covered by that gas we then multiply the req gas with the price of
//  it and check which has least price and which has not.. and then print accordingly