#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n%2==0 &&m%2!=0) cout<<n<<e;
	    else if(n%2!=0 &&m%2==0) cout<<m<<e;
	    else if(n%2!=0 && m%2!=0) cout<<m+n-1<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// This question was of observation
// eg ,if you are given one odd and one even number then no of 1x1 tiles used in that area is even number times
// lets say n=6 and m=5 so no of 1x1 tiles used is 6 ,similarly visa-versa is also true
// if both of  them are odd then our answer is n+m-1
//  we can observe by making some diagrams by hand so if we have n=5 and n=7 then no of 1x1 tiles are 5+7-1=11