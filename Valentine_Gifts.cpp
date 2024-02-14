#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<127) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

// since chef need to doube the value of price we can say that this should be the min sequence
// 2 4 8 16 32 64 128 
// therefore the x budget should be atleast greater than or equal to 127