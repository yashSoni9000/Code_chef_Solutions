#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p;
    cin >> t;
    while (t--)
    {
        cin >> p;
        int temp = p;
        if (p < 11)
            cout << p << e;
        else if (p >= 11 && p < 100)
            cout << -1 << e;
        else if (p >= 100)
        {
            temp = p / 100;
            p %= 100;
            if (p + temp <= 10)
                cout << p + temp << e;
            else
                cout << -1 << e;
        }
    }
    return 0;
}

// I have added an alternate solution to this code after the
// explanation of above code which I liked somewhere and did it
// on my own then

// we need to check if the number of problem
// if the given score is less than 10 then we can
// safely print the score as no of problems
// if the score is greater than 100 then we have to
// take consider that if score is 100 then one problem
// is done and rest only 9 , 1 point problem can be done now
// so we have to act accordingly

// #define ll long long
// #define f(end) for(register int i=0,d;i<end;i++)
// #define e '\n'
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t,p;
// 	cin>>t;
// 	while(t--)
// 	{
//         cin>>p;
//         cout<<(p/100+p%100 >10 ? -1:p/100+p%100 )<<e;
// 	}
// 	return 0;
// }