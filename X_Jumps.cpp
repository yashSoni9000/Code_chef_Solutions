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
	    if(y>x) cout<<x<<e;
	    else
	    {
	        int a=x/y;
	        if(x%y){
            cout<<a+x%y<<e;}
            else{
                cout<<a<<e;    
            }
	    }
	}
	return 0;
}

// we first check if chef jump more than reqires steps than we print the number of steps of x as we will go ahead of our destination
//so we will go only x steps , now if x>y then  we check if x is completely divisible by y if yes we print x/y
// else we print x/y+ number of extra steps required to reach x and print it