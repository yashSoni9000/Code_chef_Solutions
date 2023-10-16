#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n+1]={0},ans;
	    for(int i=1;i<=n;i++) cin>>a[i];
	    cin>>k;
	    ans=a[k];
	    sort(a,a+(n+1));
	    for(int i=1;i<=n;i++){
	        if(a[i]==ans){
	            cout<<i<<e;
	            break;
	        }
	    }
	}
	return 0;
}

// first we take the number which is placed at the k positon (i.e. where the song uncle johny is placed) and store it
// in a variable, then we sort the array as per the given question and traverse , if we get the same element in array
// as we stored in the variable then we can print the index/position i of song uncle johny and get the answer