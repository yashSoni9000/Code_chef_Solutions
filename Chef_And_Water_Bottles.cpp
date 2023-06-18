#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>k;
	    int temp=n*x;
	    if(temp<=k) cout<<n<<e;
	    else cout<<k/x<<e;
	}
	return 0;
}

// we first calculate the total liters of capacity of all the bottles together by n*x
// now if the total capacity is less than tank capacity so all bottles can be filled and we print n
// else we can only fill tank capacity/capacity of each bottle