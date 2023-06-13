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
	    y-=x;
	    if(y%8==0) cout<<y/8<<e;
	    else cout<<(y/8)+1<<e;
	}
	return 0;
}

// we are given initial rating as x and final rating y
// we will divide the difference in y-x by 8 because every time alice wins she gains 8 point so there will be increment of 8
// now we check if the difference is divisible by 8 we will print y/8 else we print y/8+1 as there will be one more game
// required for her to get y amount of trophies