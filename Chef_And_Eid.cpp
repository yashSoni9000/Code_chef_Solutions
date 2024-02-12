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
	    int a[n];
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    int minDiff=INT_MAX;
	    for(int i=0;i<n-1;i++){
	        if(a[i+1]-a[i]<minDiff) minDiff=a[i+1]-a[i];
	    }
	    cout<<minDiff<<e;
	}
	return 0;
}

// we get the array and sort it then iterate it by taking the difference of 2 elements at one time till the last element
// and we print the min diff 