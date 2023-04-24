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
	    if(b>a) a+=c;
	    else b+=c;
	    if(b>a) a+=d;
	    else b+=d;
	    if(b>a) cout<<"S"<<e;
	    else cout<<"N"<<e;
	}
	return 0;
}

// we simply need to do what we are told i.e. when a is losing c is added to it else c is added to b
// same with d value but the value were updated from previous line so we again check them  and add accordingly
// and lastly we check who is winning and we print the answer