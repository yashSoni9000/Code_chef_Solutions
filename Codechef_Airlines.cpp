#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    x*=10;
	    if(x>y) cout<<y*z<<e;
	    else cout<<x*z<<e;
	}
	return 0;
}

// we first calculate total number of seats from x flights , if that number is greater than required number of passengers
// then we only multiply required number with z amount to get total amount else we print the max amount passengers with 10 
// flights and multiply with z amount