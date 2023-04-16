#define ll long long
#define f(end) for(register int i=1,d;i<=end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
        cin>>n;
        f(n) cout<<i<<" ";
        cout<<e;
	}
	return 0;
}

// there is no way consecutive 2 numbers can form a perfect square eg 3,4 can not be a perfect square as 3x4=12 which is not a 
//perfect square so we just need to print the numbers from 1 to end of given number
