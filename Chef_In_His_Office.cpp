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
	    cout<<((x*4)+y)<<e;
	}
	return 0;
}

// since there are 4 days from monday to thursday we muliply one day hours with 4 and add y to it for friday and print ans