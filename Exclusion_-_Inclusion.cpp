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
	    ll a[n],fans[n];
	    fans[0]=0;
	    f(n){
	        cin>>a[i];
	        fans[0]+=a[i];
	    }
	    sort(a,a+n);
	   // for(int i=1;i<n-1;i++){
	   //     ll tempAns=0;
	   //     for(int j=i;j<n;j++) tempAns+=a[j];
	   //     fans[i]=tempAns;
	   // }
	   // fans[n-1]=a[n-1];
	   for(int i=1;i<n;i++) fans[i]=fans[i-1]-a[i-1];
	    f(n) cout<<fans[i]<<" ";
	    cout<<e;
	}
	return 0;
}

// we sort the array first array and decrease the previous numbers from it to get the required result , i manually had gone
// through test cases on paper and tried to solve this and then i found this pattern and implemented it
// but i got TLE error so i optimised it and here is the complete solution 