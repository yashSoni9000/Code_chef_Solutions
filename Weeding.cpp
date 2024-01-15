#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,m,k;
	cin>>t;
	while(t--)
	{
	     cin>>n>>m>>k;
	     ll a[n];
	     f(n) cin>>a[i];
	     ll temp=a[n-1]-1;
	     temp+=k;
	     if(temp<=m) cout<<"YES"<<e;
	     else cout<<"NO"<<e;
	}
	return 0;
}

// in this question we need to get the last day when it pops and add the number of days to kill it if it is less than the
// number of days of herbisides then we can print yes else print no