#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,r;
// 	cin>>t;
	while(t--)
	{
	    cin>>r;
	    if((r>=1)&& (r<=50)) cout<<100<<e;
	    else if((r>50)&& (r<=100)) cout<<50<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// if provided number is greater than 0 and less than 51 the we print 100 else if greater than 50 and less than 101 we print 50
// else print 0