#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,a1,b1,a2,b2;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    bool prog1=false,prog2=false;
	    if(((a==a1)||(a==b1))&&((b==a1)||(b==b1))) prog1=true;
	    if(((a==a2)||(a==b2))&&((b==a2)||(b==b2))) prog2=true;
	    if(prog1) cout<<1<<e;
	    else if(prog2) cout<<2<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// we need to check if a and b (the given features) belongs to the a1 and b1 features of the first language if yes we 
// set the progamming language as true , similarly we do with programming language 2 and at last acccording to their status
// we print which programming language will be used for chef work