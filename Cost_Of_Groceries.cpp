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
	    int a[n],b[n],ans=0;
	    f(n) cin>>a[i];
	    f(n) cin>>b[i];
	    f(n) if(a[i]>=x) ans+=b[i];
	    cout<<ans<<e;
	}
	return 0;
}

// we first took all the input in array and then traversed again n times , if that item has freshness value greater then x
// then we add its cost to our answer else continue the loop till the end of n items