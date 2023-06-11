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
	    x%=3;
	    if(x==0) cout<<"NORMAL"<<e;
	    else if(x==1) cout<<"HUGE"<<e;
	    else cout<<"SMALL"<<e;
	}
	return 0;
}

// the size of mario will be among the 3 size and will switch between them so if we take the remainder it will also be in range
// of either 0 or 1 or 2 so we can print according to the remainder to get our output