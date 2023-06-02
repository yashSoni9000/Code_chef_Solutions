#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    a=max(a,b);
	    c=max(c,d);
	    if(a>c) cout<<"Q"<<e;
	    else if(a<c) cout<<"P"<<e;
	    else if(a==c) cout<<"TIE"<<e;
	}
	return 0;
}

// we need to find the max of time taken by p and q respectively and then check whose time is less and print it accordingly