#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,w,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>w>>x>>y>>z;
	    y*=z;
	    if((y+w)<x) cout<<"unfilled"<<e;
	    else if((y+w)==x) cout<<"filled"<<e;
	    else cout<<"overflow"<<e;
	}
	return 0;
}

// we first get the total amount of water flown from tap and check if that amount + existing amount is less than
// capacity of bucket we print unfilled else if equal we print filled else print overflow