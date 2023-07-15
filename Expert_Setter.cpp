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
	    cin>>y>>x;
	    if(y%2){
	        if((y/2)+1<=x) cout<<"YES"<<e;
	        else cout<<"NO"<<e;
	    }
	    else{
	        if((y/2)<=x) cout<<"YES"<<e;
	        else cout<<"NO"<<e;
	    }
	}
	return 0;
}

// we will first check which one is odd and which one is even , then if odd we divide that number and add 1 to it as in odd
// numbers we get less than acutal half so we add 1 to make it borderline for us and then check if x has passed or not
// if yes we print yes else no
// similart happens with even number but here we don not add 1 as even number are perfectly divisible by 2