#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    ll x;
	    cin>>x;
	    cout<<x-1<<" "<<1<<e;
	}
	return 0;
}

// upon checking the binary numbers for x we can conclude that any 2 number lower than x and both sum =x will satisfy the 
// given condition ex,
// x=5 (101)
// 3 (011) 2 (010)
// (011&010=010) + (011|010=011)=101
// similarly, we can prove with 1,4 as well so i used above method to reduce the num by 1 and also print 1 