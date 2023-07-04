#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    int ans=0;
	    while(n!=1){
	        if(n==2) break;
	        ans+=a+b;
	        n/=2;
	    }
	    cout<<ans+a<<e;
	}
	return 0;
}

//we need to add the time for each round + break of each round to get the total time for next match then  we will add time
// till our teams are down to 2 teams , if there are 2 teams left we only need to add match time not the break time
// so after the loop we add match time to our ans to get the desired output