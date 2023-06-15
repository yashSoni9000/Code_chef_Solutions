#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    cout<<m/2+1<<e;
	}
	return 0;
}

// to secure Om has to get more than half of votes, so we divide total number of votes by 2 to get half of votes and
// add 1 and print it