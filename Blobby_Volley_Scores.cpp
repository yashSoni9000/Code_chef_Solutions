#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    string server="A";
	    int countA=0, countB=0;
	    f(s.length()){
	       if(server=="A" &&s[i]=='A') countA++;
	       else if(server=="B" &&s[i]=='B') countB++;
	       server=s[i];
	    }
	    cout<<countA<<" "<<countB<<e;
	}
	return 0;
}

// i traversed through the length of given string and checked if the server is the same as previous one
// if yes we increase the count of that player , in all other condition we do not need to increment 
// and at iteration i give the current player a the previous server so that it can be again used in next round