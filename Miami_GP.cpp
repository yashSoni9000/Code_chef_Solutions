#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    double x,y,temp;
	    cin>>x>>y;
	   temp=double(x*7);
	   temp=double(temp)/double(100);
	   x+=temp;
	   if(x<y) cout<<"NO"<<e;
	   else cout<<"YES"<<e;

	}
	return 0;
}

// we find 7% first of x number and then add that 7% to original number and check if it is less than
// y , if yes we print no else cout yes