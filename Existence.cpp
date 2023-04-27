#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    x*=x;
	    y*=2;
        if(x==y) cout<<"YES"<<e;
        else cout<<"NO"<<e;
	}
	return 0;
}

// we need to simplify the given equation to solve it faster we can also solve by putting values directly into equation
// the equation becomes (x^2-2y)^2=0 so we solve it by checking if x^2==2y if true then it also satisfies the equation