#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    string ans="";
	    int temp;
	    f(n){
	        cin>>temp;
	        if(temp%k) ans+='0';
	        else ans+='1';
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// while we take the input of ith place we check if it is divisible by k feet then it is possible to visit that place
// else he can not so we add them accordingly