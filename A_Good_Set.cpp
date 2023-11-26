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
	    for(int i=1;i<=2*n;i+=2) cout<<i<<" ";
	    cout<<e;
	}
	return 0;
}

// the sum of 2 odd numbers can never be odd so we print odd numbers