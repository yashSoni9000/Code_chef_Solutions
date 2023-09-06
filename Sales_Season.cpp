#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<=100) cout<<x<<e;
	    else if(x>100 &&x<=1000) cout<<x-25<<e;
	    else if(x>1000 && x<=5000) cout<<x-100<<e;
	    else cout<<x-500<<e;
	}
	return 0;
}

// we need to do as the question says that if x<=100 we print x as it is
// else if x>100 and x<=1000 we reduce 25 from x and so on