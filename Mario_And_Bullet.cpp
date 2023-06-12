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
	    y/=x;
	    if(z-y>0) cout<<z-y<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// we get the time required to achieve the pixel , we can get it by dividing the distance of pixel by the bullet speed and then 
// checking if the time after fire - the time required is greater than 0 so we print the time required after z time
// else print 0