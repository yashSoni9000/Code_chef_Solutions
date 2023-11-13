#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cout<<max((x/10),100)<<e;
	}
	return 0;
}

// we simply need to find the max of 10% of given number and 100 which is discount on the given product x