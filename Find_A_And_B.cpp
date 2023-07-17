#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(!((x*y)%z)) cout<<x*y<<" "<<z<<e;
	    else if(!((y*z)%x)) cout<<y*z<<" "<<x<<e;
	    else if(!((z*x)%y)) cout<<z*x<<" "<<y<<e;
	    else cout<<-1<<e;
	}
	return 0;
}

// here we check one by one that which numbers after multiplication will be divisible by third number we will show the result
// else print -1