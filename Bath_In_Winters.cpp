#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if((y*2)<=x) cout<<x/(y*2)<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// if the capacity of bucket is less than capacity of gyeser we check if each person have enough buckets for bathing and 
// print x/y*2 else no one can bath so 0 print