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
	    n*=2;
	    ll a[n]={0},max=INT_MIN;
        bool ans=true;
        f(n) cin>>a[i];
	    f(n){
	        int count=0;
	        for(int j=0;j<n;j++){
	            if(a[i]==a[j]){ count++;}
	            if(count>2){
	                ans=false;
	                break;
	            }
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we take the numbers in array and we check if the number appears more than 2 then it is not possible to split it into 2 parts
// where all the numbers are distinct as one of the 2 array will have 2 elements same