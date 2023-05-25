#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    if(y==0) cout<<"YES"<<e;
	    else{
	        
	    if(y%x==0) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	    }
	}
	return 0;
}

// we can check if the required number y is a multiple of x then we can say that at some point of time
// they can score exactly y points else we can not scoer y points