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
	    if(x<=n) cout<<x<<e;
	    else{
	       // if((x-1)%n==0) cout<<n<<e;
	       // else if(x%n) cout<<x%n-1<<e;
	       // else cout<<(x-1)%n<<e;
	       cout<<x%(n+1)<<e;
	    }
	}
	return 0;
}

// by observing the example we can see that if the number is less than n then we need to print x else we add 1 to n and 
// find the modulo with x and print it