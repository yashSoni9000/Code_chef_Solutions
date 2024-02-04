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
	    int a[n],b[n],count=0;
	    f(n){
	        cin>>a[i];
	        if(a[i]==0) b[i]=1;
	        else b[i]=0;
	    }
	    f(n) cout<<b[i]<<" ";
	    cout<<e;
	}
	return 0;
}

// if we invert all the digits in the array the function score will still be same and the whole array will be different from
// the given array initially, therfore we just need to invert all the digits in the array and show the result