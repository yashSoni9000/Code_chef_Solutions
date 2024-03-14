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
	    int ans=0,maxCount=0,zeroCount=0;
	    string s;
	    cin>>s;
	    f(n){
	       if(s[i]=='1'){
	           ans++;
	           zeroCount=0;
	       }
	       else{
	           zeroCount++;
	           maxCount=max(zeroCount,maxCount);
	       }
	    }
	    cout<<ans+maxCount<<e;
	}
	return 0;
}

// when there is 1 encountered we keep the count of consecutive zeros to 0 and if initial char is 0 then we increment the 
// zero count and assign it to max count which we add to our number of 1 to get final answer