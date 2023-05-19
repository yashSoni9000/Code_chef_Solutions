#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,n1,n2;
// 	cin>>t;
	while(t--)
	{
	    cin>>n1>>n2;
	    if(n1>n2) cout<<n1-n2<<e;
	    else cout<<n1+n2<<e;
	}
	return 0;
}

// if n1>n2 subtract else cout n1_n2