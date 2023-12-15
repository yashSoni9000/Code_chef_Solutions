#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    x*=15;
	    y*=2;
	    if(x>=y) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we first get the total km he can travel with x petrol and we check the distance he need to cover if distance is
// less then remaning km then he can go else he can not go