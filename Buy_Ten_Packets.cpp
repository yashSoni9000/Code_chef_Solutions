#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if((2*x)<=y) cout<<(5*x)<<e;
	    else if((2*x)>y) cout<<(2*y+x)<<e;
	}
	return 0;
}

// we are given 2 prices of times in 2 packets and 4 packets , if the 2 packet cost more than 4 packet cost we will use 2 of the
// 4 packet and one 2 packet to get 10 items else we will use all the 2 packet items