#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,k;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>k;
	    if(x%k==0 &&y%k==0) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to check if the number of steps divides x and y then only it is possible to reach at x,y
// eg
// 4,2,2
// now we can got 2 places right and the 4 places up as the number of steps is 2 
// if it was 3 then we get past the 2 and 4 places so we check the given condition