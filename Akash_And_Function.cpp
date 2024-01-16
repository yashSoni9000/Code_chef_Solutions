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
	    ll ans=(n+1)/2;
	    cout<<ans<<e;
	}
	return 0;
}

// we need to find the number of odd numebers as they are distinct in the given range and print them