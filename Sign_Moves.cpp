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
	    if(n%2) cout<<-(n+1)/2<<e;
	    else cout<<n/2<<e;
	}
	return 0;
}

// this question was of observation where we have to see if given number is odd then we take the add 1 and take half of it and
// make it negative else print half of the given value