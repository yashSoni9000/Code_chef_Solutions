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
	    if(x==w|| y==w|| z==w ||(x+y)==w ||(y+z)==w ||(x+z)==w ||(x+y+z)==w ) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

//  we need to check if any of weight x,y,z or combination of it has weight equal to w so i put all the conditions here