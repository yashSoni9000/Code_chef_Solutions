#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if((a+b)==c) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}


// if a+b==c the we can print yes else no