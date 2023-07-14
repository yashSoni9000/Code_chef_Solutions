#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,p,q,r,s;
	cin>>t;
	while(t--)
	{
	    cin>>p>>q>>r>>s;
	    if(p>(q+r+s)) cout<<"YES"<<e;
	    else if(q>(p+r+s)) cout<<"YES"<<e;
	    else if(r>(q+p+s)) cout<<"YES"<<e;
	    else if(s>(q+r+p)) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we simply need to check if one of the given companies is greater than the rest of the 3 companies if yes then print yes
// else print no