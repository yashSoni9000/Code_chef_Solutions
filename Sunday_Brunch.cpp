#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if((20*y)<x) cout<<20<<e;
	    else cout<<x/y<<e;
	}
	return 0;
}

// there are 20 people which chef need to feed so if plates consumed by each person * 20 is less then total number of plates
// then all 20 can be fed so we print 20 else we print x/y to get number of people chef can feed