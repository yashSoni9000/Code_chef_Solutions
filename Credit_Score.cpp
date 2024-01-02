#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,x;
// 	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x>=750) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we simply need to check if x greater than or equal to 750 we print yes else print no