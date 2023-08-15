#define ll long long
#define f(end) for(int i=1;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    ll size=1;
	    f(k) size=size*((n-k)+i)/i;
	    cout<<size<<e;
	}
	return 0;
}

//we need at least k types of marbles so we take out from the total required and then for the rest of the combinations we make 
// we make possible combinations for each colors and multiply it with previous values to get the possible cases but we also 
// need to divide 'i' from subtracted value of total number of marbles to get our answer