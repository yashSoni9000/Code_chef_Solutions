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
	    int maxi=INT_MIN,temp,sum=0;
	    f(n){
	        cin>>temp;
	        if(temp>maxi) maxi=temp;
	        if(temp%x) sum+=((temp/x)+1);
	        else sum+=(temp/x);
	    }
	    if(maxi<sum) cout<<maxi<<e;
	    else cout<<sum<<e;
	}
	return 0;
}

// we can directly say that time taken by multi inferno is always the max element in the given array, for single inferno 
// we need to calculate to each of the given value of array and checking the time to destroy that troop and add it to
// single inferno time. At last we check if multi inferno time is less than single inferno we print multi inferno time taken
// else print single inferno time

// BTW Clash Of Clans reference in question, I love it 💖 my tag is #9GVGQ288R