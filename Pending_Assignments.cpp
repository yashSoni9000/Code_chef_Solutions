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
	    z*=1440;
	    x*=y;
	    if(x<=z) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// if the total minutes chef needs to complete is less than or equal to number of days in minutes we print yes else print no