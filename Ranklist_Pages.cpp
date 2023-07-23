#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x%25) cout<<x/25+1<<e;
	    else cout<<x/25<<e;
	}
	return 0;
}


// on one page only upto 25 ranks can be shown so we check if the rank is divisible by 25 then we can directly print the division
// of rank by 25 else there will be one more page required to see chef's rank so we addes +1 in case if rank is not divisible 
// by 25