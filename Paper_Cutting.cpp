#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    n/=x;
	    cout<<n*n<<e;
	}
	return 0;
}

// we get the total number of possible x*x block possible from n*n paper by dividing n by x and printing the square of the
// divided number