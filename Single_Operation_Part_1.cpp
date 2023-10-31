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
	    int ans=0;
	    string s;
	    cin>>s;
	    f(n){
	        if(s[i]=='1') ans++;
	        else break;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we basically need to do left shift operation in reverse so we count the number of 1 at the starting and this will 
// give us the max number and the y we need