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
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)<c||(b+c)<a||(c+a)<b) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we sum of any of the given 3 armies is greater than third one we print yes else print no