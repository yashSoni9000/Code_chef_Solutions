#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(abs(n-m)%2) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

//by observing we can see that if the difference between the problem of alice and bob are even then it is possible to make them
// equal else we can not make them equal no matter what it will cross each other without both being equal at same time