#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],ans=0;
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    for(int i=1;i<n;i++) ans+=a[i];
	    cout<<ans<<e;
	}
	return 0;
}

//we take the profit made by chef in an array and sort it so that the first element is the min profit 
//and we can remove that day from the total sum to get the max profit