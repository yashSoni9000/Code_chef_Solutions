#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,a,k;
	cin>>t;
	while(t--)
	{
	    cin>>a>>k;
	    ll count=0;
	    while(a>0){
	        a/=k;
	        count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// we keep dividing a by k till we get a<=0 and at each loop we increment the count and then at last print the count