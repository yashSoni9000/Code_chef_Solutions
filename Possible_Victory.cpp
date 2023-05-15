#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,r,o,c;
// 	cin>>t;
	while(t--)
	{
	    cin>>r>>o>>c;
	    o=20-o;
	    o*=36;
	    c+=o;
	    if(c>r) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to find first remaining overs with 20-o then we multiply by 36 as 6*6 i.e. team get 6 chances and 6 max runs can be 
// scored then we add  the runs scored by the team and if it is greater than the required runs then we print yes else no