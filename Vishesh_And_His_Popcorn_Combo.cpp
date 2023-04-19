#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,a1,a2,b1,b2,c1,c2;
	cin>>t;
	while(t--)
	{
	    cin>>a1>>a2>>b1>>b2>>c1>>c2;
	    a1+=a2;
	    b1+=b2;
	    c1+=c2;
	    a1=max(a1,b1);
	    b1=max(b1,c1);
	    a1=max(a1,b1);
	    cout<<a1<<e;
	}
	return 0;
}


// we first added all the 3 combo values to get each satisfaction and then checked which among the 3 is highest and printed it