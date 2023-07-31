#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    bool chick=false,duck=false;
	    if(!(z%x)) chick=true;
	    if(!(z%y)) duck=true;
	    if(chick && duck) cout<<"ANY"<<e;
	    else if(chick==true && duck==false) cout<<"CHICKEN"<<e;
	    else if(chick==false && duck==true) cout<<"DUCK"<<e;
	    else cout<<"NONE"<<e;
	}
	return 0;
}

// we check if the number of legs is divisible by the given number then we can see that any of them would be present therefore
// we print all possible combiantions of chick and duck