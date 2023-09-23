#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,v1,v2;
	cin>>t;
	while(t--)
	{
	    cin>>n>>v1>>v2;
	    double stairs=n*1.414;
	    stairs/=v1;
	    double lift=2*n;
	    lift/=v2;
	    if(stairs>lift) cout<<"Elevator"<<e;
	    else cout<<"Stairs"<<e;
	}
	return 0;
}

// since root2 is 1.414 we multiply n by 1.414 to get the length of stairs and for the length of travel of lift it will 
// always be 2*n , we know the speed distance and time relation from which we can find that which takes less time 
// and then we print according to it