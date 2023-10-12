#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    ll a[n],ans=0;
	    f(n) cin>>a[i];
	    f(n){
	        if(abs(a[i]-m)>=abs(a[i]-1)) ans+=abs(a[i]-m);
	        else ans+=(abs(a[i]-1));
	    }
	    cout<<ans<<e;
	}
	return 0;
}

//we need to check both m-a[i] (i.e. particular number -m ) and a[i]-1 and whosoever is max we need to add it to our 
// answer