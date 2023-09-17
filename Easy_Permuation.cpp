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
	    for(int i=n;i>0;i--) cout<<i<<" ";
	    cout<<e;
	}
	return 0;
}

//(N+1) is always going to be the least lcm that can be achived, by just reversing the sorted permutation.