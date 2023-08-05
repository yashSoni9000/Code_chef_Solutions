#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    ll ans=(x+y)/2;
	    ans=max(abs(x-ans),abs(y-ans));
	    cout<<ans<<e;
	}
	return 0;
}

// we first find the mid point of the given 2 numbers as their mid point will always have the min distance of the max of diff
// with the mid point we calculate accordingly and print the answer