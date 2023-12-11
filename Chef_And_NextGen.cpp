#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    a*=b;
	    x*=y;
	    if(a>x) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

// we first get the total power from all the b years and power from x gram with y power each and if total power is 
// more than required power then chef can not get funding else he will get funding