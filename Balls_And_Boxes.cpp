#define ll long long
#define f(end) for(int i=0;i<end;i++)
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
	    k=(k*(k+1))/2;
	    if(n>=k) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// lets suppose that we have 3 boxes and 5 balls so according to questions we need different balls in each box so 
// we can take 1,2,3 balls in 3 boxes respectively so we need at least a total of 6 balls more than that is fine but we 
// aleast need to have that much balls present so we can check the pattern that we need balls that is equal to sum of given boxes
// and for that we have formula n*n+1/2 so we applied it and found the answer