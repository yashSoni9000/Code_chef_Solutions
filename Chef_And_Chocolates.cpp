#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,c,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>c>>x>>y;
	    c-=x;
	    cout<<c*y<<e;
	}
	return 0;
}

// we get the required amount of chocolates by subtracting x from x and print with value of each chocolate to get our answer