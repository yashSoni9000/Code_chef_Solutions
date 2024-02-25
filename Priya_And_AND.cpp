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
	    int a[n],ans=0;
	    f(n) cin>>a[i];
	    f(n-1){
	        for(int j=i+1;j<n;j++){
	            if((a[i]&a[j])==a[i]) ans++;
	        }
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we need to apply brute force to solve this question, just make outer loop for n-1 times and inner loop one greater than i
// as it is given in question that i < j and we check if the given condition is true we increment the counter
// and print the value of counter