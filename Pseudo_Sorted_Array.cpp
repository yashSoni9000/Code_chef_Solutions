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
	    bool ans=true;
	    ll a[n];
	    f(n) cin>>a[i];
	    f(n-1){
	        if(a[i]>a[i+1]){
	            swap(a[i],a[i+1]);
	            break;
	        }
	    }
	    f(n-1) if(a[i]>a[i+1]) ans=false;
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// first i check that if after swapping two number the array is sorted or not if yes then we print yes else print no