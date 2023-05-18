#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,h;
	double x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>h;
	    x-=h;
	    x=ceil(x/y);
	    cout<<x+1<<e;
	}
	return 0;
}

// first deal the major attack i.e h and then calculate the remaining moves
// by dividing remaining health of boss and add 1 to it while printing the moves