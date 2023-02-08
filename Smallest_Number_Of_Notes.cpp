#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0, ans;
        cin >> n;
        if (n >= 100)
        {
            ans = n / 100;
            count += ans;
            n %= 100;
        }
        if (n >= 50 && n < 100)
        {
            ans = n / 50;
            count += ans;
            n %= 50;
        }
        if (n >= 10 && n < 50)
        {
            ans = n / 10;
            count += ans;
            n %= 10;
        }
        if (n >= 5 && n < 10)
        {
            ans = n / 5;
            count += ans;
            n %= 5;
        }
        if (n >= 2 && n < 5)
        {
            ans = n / 2;
            count += ans;
            n %= 2;
        }
        if (n >= 1 && n < 2)
        {
            ans = n / 1;
            count += ans;
        }
        cout << count << e;
    }
    return 0;
}

// here we take an example of 1751 as n
// first we check if n>100 here yes so we divide it by 100 to get number of notes
// of 100 which will be used i.e. 17 here now we get the remainder to get the remaining
// numbers so we divide by 100 to get last 2 bits i.e. 51 ,now 51 is greater than 50 & <100
// so we again divide by 50 to get number of notes of 50rs which is 1 here
// and then get remainder i.e 51%50=1 now its the last condition we check
// we get 1 so we have a 1rs note so we add it to the number of notes i.e. count
// and then print our result