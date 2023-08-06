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
	    if((a!=c)&&(b!=d)) cout<<1<<e;
	    else cout<<2<<e;
	}
	return 0;
}

// if the given condition satisfies then only chef can go from given point to destination else he need atleast 2 steps to go