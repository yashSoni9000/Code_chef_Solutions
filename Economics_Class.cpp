#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],b[n],count=0;
	    f(n) cin>>a[i];
	    f(n) cin>>b[i];
	    f(n) if(a[i]==b[i]) count++;
	    cout<<count<<e;
	}
	return 0;
}

// we traversed through the array in which we put our values of 's' and 'd' and checked if at i position both array elements are
// equal then we increase the count as the market is in equilibrium so in count++ and at last print the count