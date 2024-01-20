#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,l,k;
	cin>>t;
	while(t--)
	{
	    cin>>l>>k;
	    if(l%k) cout<<1<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// if number of parts k is divides l length then all the k parts will be equal therefore their sum will be 0 else in all
// condition the answer will alwaya be 1.
// ex : 5 3
// |-|-|-|-|-|
// |---|-|---|
// here there are 5 parts and we can divide like 2 1 2 or 1 2 2 or 2 2 1 in all cases the answer will be one