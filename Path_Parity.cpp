#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    bool k;
	    cin>>n>>k;
	    if(!(n%2)) cout<<"YES"<<e;
	    else if((n%2)==k) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// the formula given to make the matrix is just numbers written vertically in a matrix and by check multiple sizes of n 
// we can observe that the box with even number can have both parity as the sum from initial to the end 
// where as odd n number will only have odd parity sum so if k==1 then only odd will be true else it will be
// not satisfy the parity