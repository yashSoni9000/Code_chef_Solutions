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
	    ll x,y,sum=0;
	    cin>>x>>y;
	    x=abs(x);
	    y=abs(y);
	    sum=x+y;
	    if(sum%2) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

// By observing in x-y plane, I concluded that if absolute sum of 2 given numbers is even then it is possible to reach at 0,0
// else it is not possible