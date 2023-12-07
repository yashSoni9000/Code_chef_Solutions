#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%2) cout<<n-1<<e;
	    else cout<<n<<e;
	}
	return 0;
}

// if we observe that if the number is odd then it will take n-1 moves moving diagonally and if number is even then
// we would need one extra step after the diagonaly movements so we print n