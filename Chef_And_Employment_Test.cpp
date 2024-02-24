#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n],sum=n+k;
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    sum/=2;
	    cout<<a[sum]<<e;
	}
	return 0;
}

// we may add any amount of random numbers but median can never exceed the max element as there is condition that n>k
// therefore we add the given 2 numbers n and k and divide by 2 to get the mid value which will lie in the given sorted
// array and we print that value