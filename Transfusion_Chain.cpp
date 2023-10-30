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
	    string c;
	    int a[4]={0};
	    f(n){
	        cin>>c;
	        if(c=="A") a[0]++;
	        else if(c=="B") a[1]++;
	        else a[2]++;
	    }
	    int aRoute=a[0]+a[2];
	    int bRoute=a[1]+a[2];
	    cout<<max(aRoute,bRoute)<<e;
	}
	return 0;
}

// the max possible chain can be of O to A to AB  or  O to B to AB so first we simply need to get the frequency of all the given and then check freq of both a route and b route and 
// print the max of the given 2 , since O and AB are common in both I merged them in single variable.
