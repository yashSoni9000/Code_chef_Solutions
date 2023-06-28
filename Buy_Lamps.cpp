#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>x>>y;
	    int ans=k*x;
	    int remainLamp=n-k;
	    int redCost=remainLamp*x;
	    int blueCost=remainLamp*y;
	    cout<<min((ans+blueCost),(ans+redCost))<<e;
	}
	return 0;
}

// we first find out the number of blue lamps and find its total cost aside k red lamps , now we take the remaing lamp and 
// check with the red lamp cost and print the min from either of them