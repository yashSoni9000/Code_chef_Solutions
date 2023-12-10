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
	   if((x/2)<z) cout<<"YES"<<e;
	   else cout<<"NO"<<e;
	}
	return 0;
}

// we simply get all the students and check if givne z numeber is strictly greater than z we print yes else print no