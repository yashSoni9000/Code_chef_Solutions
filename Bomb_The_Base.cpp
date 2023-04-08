#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    ll arr[n],ans=0;
	    f(n) cin>>arr[i];
	    for(ll i=n-1;i>=0;i--){
	        if(arr[i]<x){
	            ans=i+1;
	            break;
	        } 
	    }
	    cout<<ans<<e;
	}
	return 0;
}


// the question basically want us to find the number in  the given array which is smaller than the x number
// i traversed array in reverse order and check if there is a number which is smaller than x so we give that
// index+1 in our answer and break and then we print the answer