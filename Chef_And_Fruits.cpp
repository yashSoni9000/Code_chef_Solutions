#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>k;
	    if(n>=m){
	        m+=k;
	        if(m>=n) cout<<0<<e;
	        else cout<<n-m<<e;
	    }else{
	        n+=k;
	        if(n>=m) cout<<0<<e;
	        else cout<<m-n<<e;
	    }
	}
	return 0;
}

// we check the min number and add k to it if it is greater than max number we print 0 as they both will be equal by then
// else we print the difference between the values to get our answer