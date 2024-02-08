#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    // approach 1
	   // ll maxi=max(x,y);
	   // ll mini=min(x,y);
	   // if(maxi%mini) cout<<1<<e;
	   // else cout<<mini<<e;
	   
	   // approach 2
	   //while(x){
	   //    ll temp=y;
	   //    y=x;
	   //    x=abs(x-temp);
	   //}
	   //cout<<y<<e;
	   cout<<gcd(x,y)<<e;
	}
	return 0;
}

// we need to print the gcd of the 2 number which can be seen by observation