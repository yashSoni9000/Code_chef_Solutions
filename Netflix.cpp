#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,x;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>x;
	    if(a+b>=x||b+c>=x||a+c>=x) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}


// if any 2 of the persons have more than x amount of money then they can buy netflix subscription
// else they can not buy netflix subscription