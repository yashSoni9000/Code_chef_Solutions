#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    cout<<(n - 1) * (m - 1)<<e;
	}
	return 0;
}

// by observing we can see that for every column in between we can make a cut so a total of m-1 , similarly for 
// rows the no of cuts can be made are n-1 so total number of cuts are n-1 * m-1