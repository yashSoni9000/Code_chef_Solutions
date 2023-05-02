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
	    int a[n],b[n],count=0,ans=0;
	    f(n) cin>>a[i];
	    f(n) cin>>b[i];
	    f(n){
	        if((a[i]-ans)>=b[i]) count++;
	        ans=a[i];
	    }
	    cout<<count<<e;
	}
	return 0;
}


// here i first took the input and then checked if the time taken by the chef to prepare the dish is greater than or equal to 
//the time taken by the cook to cook the dish. But we need to keep in mind one thing that we are given time stamps and not the 
// amount of time required to complete it so we have to subtract the previous value to get actual time remaining for students