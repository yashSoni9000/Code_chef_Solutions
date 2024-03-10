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
	    int a[n],sum,mini=INT_MAX;
	    cin>>a[0];
	    sum=a[0];
	    for(int i=1;i<n;i++){
	        cin>>a[i];
	        sum^=a[i];
	    }
	    mini=sum;
	    f(n){
	        mini=min(mini,sum^a[i]);
	    }
	    cout<<mini<<e;
	}
	return 0;
}

// XOR has property that if number is repeated/ same then output is 0 therefore first we take all the numbers XOR and then
// keep a loop where we XOR sum with inital digit and check for min value as we are given to remove atmost 1 element 
// we can use it to remove if necessay by XORing and print the min XOR output