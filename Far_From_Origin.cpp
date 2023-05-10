#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x1,y1,x2,y2;
	cin>>t;
	while(t--)
	{
	    cin>>x1>>y1>>x2>>y2;
	    double bob=sqrt((x1*x1)+(y1*y1));
	    double alex=sqrt((x2*x2)+(y2*y2));
	    if(bob<alex) cout<<"BOB"<<e;
	    else if(alex<bob) cout<<"ALEX"<<e;
	    else cout<<"EQUAL"<<e;
	}
	return 0;
}


// we used pythagoras theorem to find the distance between two points. and min of the two is the answer.