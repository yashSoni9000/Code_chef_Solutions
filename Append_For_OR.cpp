#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,y;
	cin>>t;
	while(t--)
	{
	    ll temp,ans=0;
	    cin>>n>>y;
	    f(n){
	        cin>>temp;
	        ans|=temp;
	    }
	    int another=y-ans;
	    ans|=another;
	    if(ans==y) cout<<another<<e;
	    else cout<<-1<<e;
	}
	return 0;
}

// we first take the bitwise OR of every element in the array , after that we will get the OR value then we subtract that
// value from or target number and again OR it and check if it is equal to target print yes else print no
// e.g. : 4 15
// 3 5 6 2
// 3|5|6|2 == 7
// 15 - 7 = 8 so we print the number