#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    if(n>x) cout<<"NO"<<e;
	    else
	    {y/=3;
	    int temp;
	    x-=y;
	    x/=2;
	    if(x+y>=n) cout<<"YES"<<e;
	    else cout<<"NO"<<e;}
	}
	return 0;
}

// first we check if the number of big ornament are greater than given leaf we print no as at least there needs be one big
// ornament present for every leaf, for other cases we get the total number of small ornaments we can attach with leaf 
// then those amount is reduced to get the remain big ornament amount and we then divide the big ornament by 2 and check if
// the given sum is greater than or equal to n we print yes else print no