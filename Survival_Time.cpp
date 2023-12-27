#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>d;
	    x*=5;
	    n/=x;
	    n+=d;
	    cout<<n<<e;
	}
	return 0;
}

// we simply need to calculte the total number of buns needed each and and divide it by total buns to get day remain
// and at last we add d days to give the number of survival days