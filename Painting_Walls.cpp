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
	    x*=y;
	    z/=2;
	    z/=x;
	    cout<<z<<e;
	}
	return 0;
}

// we first get area of one wall then get the cost of each wall and divide by area of each wall to get total number of walls