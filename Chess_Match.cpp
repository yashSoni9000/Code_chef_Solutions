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
	    n=2*(180+n);
	    a+=b;
	    cout<<n-a<<e;
	}
	return 0;
}


// question is too confusing , I simply used the explanation given to us and coded accordingly to get my answer