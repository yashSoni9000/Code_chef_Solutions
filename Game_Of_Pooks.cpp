#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==2 ||n==3) cout<<n-1<<e;
	    else cout<<n<<e;
	}
	return 0;
}

// we can observe that if the board is of 2x2 or 3x3 then only 1 and 2 pooks are possible respectively else all the cases
// the number of pooks placed will be equal to the size of board