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
	    a+=b+c+d;
	    if((a==0)) cout<<"IN"<<e;
	    else cout<<"OUT"<<e;
	}
	return 0;
}

// if all the refree agress then the sum will be 0 and will be considered as in else all the cases ball will be 
//considered out 