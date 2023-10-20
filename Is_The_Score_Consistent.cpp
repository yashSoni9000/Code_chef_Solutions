#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if(a<=c && b<=d ) cout<<"POSSIBLE"<<e;
	    else cout<<"IMPOSSIBLE"<<e;
	}
	return 0;
}

// we need to check if a is less than c and b < d then only it is possible for both team to have same score else it is
// not possible