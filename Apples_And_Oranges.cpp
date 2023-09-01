#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    ll num=gcd(n,m);
	    cout<<num<<e;
	}
	return 0;
}

// we can say that the number of people who will get equal number of apples and oranges will be equal to the HCF
// (highesgt common factor) of the given 2 numbers. I deduced it by observaiton 