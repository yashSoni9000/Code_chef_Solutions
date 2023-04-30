#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(k==1 ){
	        if(n%4==0) cout<<"On"<<e;
	        else cout<<"Ambiguous"<<e;
	    }
	    else{
	        if(n%4==0) cout<<"Off"<<e;
	        else cout<<"On"<<e;
	    }
	}
	return 0;
}

// I divided question into 2 parts i.e then torch is off and when its on
// when its on there will be no ambiguity if user either do not change its
// state or change it state in a multiple of 4 then it will still be on 
// else we can not determine if the state will be on or off
// similar thing happens with off state as well is that when user changes state
// in a multiple of 4 then only the state will be off else it will be in 
// an on state