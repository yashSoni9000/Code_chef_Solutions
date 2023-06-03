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
	    a=max(a,b);
	    c=max(c,d);
	    cout<<a+c<<e;
	}
	return 0;
}

// we first take the max of a and b ingredients and after that we take max tastiness of c and d ingredients
// print the max tastiness from both group by adding them