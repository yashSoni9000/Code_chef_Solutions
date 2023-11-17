#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    double n,x;
	    cin>>n>>x;
	    n=ceil(n/6);
	    cout<<n*x<<e;
	}
	return 0;
}

// first we get how many batch of people are there , we can get that by dividing by 6 and then multiplying
// by the price x for each subscription to get our min total cost