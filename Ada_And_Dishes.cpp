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
	    int sum1=0,sum2=0,a[n];
	    f(n) cin>>a[i];
	    sort(a,a+n,greater<int>());
	    f(n){
	        if(sum1<sum2) sum1+=a[i];
	        else sum2+=a[i];
	    }
	    cout<<max(sum1,sum2)<<e;
	   // for(int i=n-1;i>0;i--){
	   //     ans+=min(a[i],a[i-1]);
	   //     a[i-1]=abs(a[i]-a[i-1]);
	   // }
	   // if(a[0]!=0) ans+=a[0];
	   // cout<<ans<<e;
	}
	return 0;
}

// we find which burner is free currently and append another dish till all dishes are cooked