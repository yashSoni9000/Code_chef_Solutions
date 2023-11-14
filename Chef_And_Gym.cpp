#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if((x+y)<=z) cout<<2<<e;
	    else if(x<=z) cout<<1<<e;
	    else cout<<0<<e;
	}
	return 0;
}

//if both x & y sum is less then or equal  to z we print 2 as he can afford both in gym if only x<=z then we print 1
// else print 0