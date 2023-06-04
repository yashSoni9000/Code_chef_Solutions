#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,x,y;
// 	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    y/=2;
	    cout<<x-y<<e;
	}
	return 0;
}

// we are given that y is even so we can find that actual time spent by chef for first y time by dividing y by2 as he was
// watching it at 2x speed and then subtract y from x to get our answer