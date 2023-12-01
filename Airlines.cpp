#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,n;
	cin>>t;
	while(t--)
	{
	    cin>>x>>n;
	    x*=100;
	    if(x>=n) cout<<0<<e;
	    else{
	        n-=x;
	        double ans=(double)n/100;
	        cout<<ceil(ans)<<e;
	    }
	}
	return 0;
}

// first we get total number of passenger capacity and if the capacity is more than givne n then we can print 0
// else we get the diff and divide by 100 and print the upper limit of it 