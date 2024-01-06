#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    ll n,c;
	    cin>>n;
	    ll ans=(n*(n+1))/2,temp,sum=0;
	    f(n){
	        cin>>temp;
	        sum+=temp;
	    }
	    if(ans==sum) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we first get the total number of stamps needed for every i th person and total and then we add the given stamps that each 
// person has we check if both are equal we print yes else print no