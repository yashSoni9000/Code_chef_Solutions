
#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    bool ans=true;
	    int a[n],sum=0,remainders;
	    f(n){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    remainders=sum%x;
	    f(n){
	        if(a[i]<=remainders){
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<sum/x<<e;
	    else cout<<-1<<e;
	}
	return 0;
}

// first we get the sum of numbers and check the remainder of money which will be there, and check if the remainder money amount
// of note is present in the given array the the customer is "inadequate" and we print -1 else we print the number of sweets
// customer can buy