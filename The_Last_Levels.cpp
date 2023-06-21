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
	    y*=x;
	    int temp=x/3;
	    if(x%3) cout<<(z*temp)+y<<e;
	    else cout<<(z*temp)+y-z<<e;
	}
	return 0;
}

// we will first find the amount of time needed to complete the game then according to the it  we add z amount of time every
// 3 levels and then ew check if x is not divisible by 3 we can directly print the sum of all the time and everyy 3 level break
// else we need  to remove z amount of time as we do not need to consider the time after completing the game 