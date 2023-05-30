#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	double n,k,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>m;
	    k*=m;
	    cout<<ceil(n/k)<<e;
	}
	return 0;
}

// we first calculate the total number of candies a bag can contain with the pockets in it
// then we divie it by number of candies to get the total number of bags
// since the division might be in floating point we use the ceil function
// to get the next higher number