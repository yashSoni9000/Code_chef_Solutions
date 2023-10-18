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
	    ll temp,a,ans=0;
	    cin>>n;
	    cin>>temp;
	    f(n-1){
	        cin>>a;
	        ans+=(abs(a-temp)-1);
	        temp=a;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// for each input we take the absolute value of current number and next number and then for ex 6->11 has 7 8 9 10 which is
// 11-6=5-1=4 and we add that value to our final answer to get desired output