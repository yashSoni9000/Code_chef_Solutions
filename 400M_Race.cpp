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
	    if(x<y && x<z) cout<<"ALICE"<<e;
	    else if(y<x && y<z) cout<<"BOB"<<e;
	    else cout<<"CHARLIE"<<e;
	}
	return 0;
}

// we check which number is min of all the given 3 and print accordingly