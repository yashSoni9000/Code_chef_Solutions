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
	    ll m,n;
	    bool notPrime=false;
	    cin>>m>>n;
	    for(ll i=m;i<=n;i++){
	        if(i==1) continue;
	        notPrime=false;
	        for(ll j=2;j<=sqrt(i);j++){
	            if((i%j)==0){
	                notPrime=true;
	                break;
	            }
	        }
	        if(!notPrime) cout<<i<<e;
	    }
	}
	return 0;
}

// normal approach for prime number will not work we have to use the square root approach for checking prime numbers 