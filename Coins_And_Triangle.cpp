#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll ans=0,count=0;
	    for(ll i=1;ans<=n;i++){
	        ans+=i;
	        count++;
	    }
	    cout<<count-1<<e;
	}
	return 0;
}

// we simply need to loop until the sum of numbers are less than n and every time next natural number is added 
// we increment the count of level and print the count -1