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
	    cout<<(x*10)+(y*5)<<e;
	}
	return 0;
}

// we need to print the number of x coins with 10 and y coins with 5 and add them to get our result