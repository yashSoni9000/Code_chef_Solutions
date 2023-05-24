#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,p,q;
	cin>>t;
	while(t--)
	{
	    cin>>p>>q;
	    p+=q;
	    if((p%4)==1||p%4==0) cout<<"Alice"<<e;
	    else cout<<"Bob"<<e;
	}
	return 0;
}


// if sum is divisible by 4 or the remainder is 1 we print alice else bob