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
	    if(n+k<=m) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// if the registered student k and n friends are less than total capacity m we print yes else print no