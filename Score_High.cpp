#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b>>c>>d;
	    a=max(a,b);
	    c=max(c,d);
	    cout<<(max(a,c))<<e;
	}
	return 0;
}


// we need to find which option has max number of question so that we can mark
// all the options of the n questions as the max number of questions on that option
// in this way chef can score max marks