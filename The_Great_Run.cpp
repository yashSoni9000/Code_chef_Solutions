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
	    int a[n+1]={0},sum=0,maxsum=0;
	    f(n) cin>>a[i];
	    f(k) sum+=a[i];
	    maxsum=sum;
	    for(int i=k;i<n;i++){
	        sum+=a[i]-a[i-k];
	        if(sum>maxsum) maxsum=sum;
	    }
	    cout<<maxsum<<e;
	}
	return 0;
}

// first we take the first k numbers and get their sum and based on that sum we calculate the other sum after kth element
// then we print the max sum which we got till now