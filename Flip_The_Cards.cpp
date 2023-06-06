#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
        cout<<min(n-x,x)<<e;
	}
	return 0;
}

//suppose there are 5 card of which 3 card are facing up and 2 are facing down so with min number of swaps we can swap 2 card 
// so we need to find the min of x and n-x as our answer