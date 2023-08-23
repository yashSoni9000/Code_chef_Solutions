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
	    ll n;
	    cin>>n;
	    cout<<n/2+1<<e;
	}
	return 0;
}

// chef need to eat maximum number of cupcakes so he put half amount ,but if he puts half amount in a package then he need to 
// put the other half in another package as well as all packages needs to be having same amount of cupcakes so he puts one
// extra cupcake in package so that he dosent need to make another package and then he can eat maximum amount of cupcake