#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    double a,b,x,y;
	    cin>>a>>b>>x>>y;
	    a/=x;
	    b/=y;
	    if((a)<(b)) cout<<"Chef"<<e;
	    else if((a)>(b)) cout<<"Chefina"<<e;
	    else cout<<"Both"<<e;
	}
	return 0;
}

// we simply calculate the value of chef and chefina and then compare them. with the no of floor chef is currently at and dividing  by
// x which the rate at which chef is going down. and the same for chefina. whosoever has less time by this calculation is the winner. and print accordingly