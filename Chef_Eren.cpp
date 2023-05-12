#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    if(n%2==0) cout<<(n/2)*a+(n/2)*b<<e;
	    else{
	        n=(n+1)/2;
	        cout<<(n-1)*a+n*b<<e;
	    }
	}
	return 0;
}

// if no. of episodes are even then we simply half them and multiply each with a and b else if odd then we get the number of a and b
// present and then multiply it