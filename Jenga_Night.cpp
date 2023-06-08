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
	    if(x%n==0) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// if the number of tiles are divisible by the number of people then we can say that each player can place one tile at their turn
// and at the end there will be no tiles available so we print yes if divisible else print no