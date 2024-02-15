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
	    char c[6];
	    int count=0;
	    bool ans=false;
	    f(6){
	        cin>>c[i];
	        if(c[i]!='W' && count<4) count=0;
	        if(c[i]=='W') count++;
	        if(count==3) ans=true;
	    }
	    ans ? cout<<"YES" : cout<<"NO";
	    cout<<e;
	}
	return 0;
}

// the input taking part is bit trick as we have to take in input integer and char as well, we then move to logic that
// if 'W' appears 3 times we make ans flag as true else we set the hattrick count to 0 and again check for hattrick and
// based on the flag we print yes or no