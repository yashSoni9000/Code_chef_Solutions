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
	    int ans=1;
	    f(n) if(s[i]=='1' && s[i+1]=='0') ans++;
	    cout<<ans<<e;
	}
	return 0;
}

//if the current string is 1 and next is 0 then only there will be a max number available else there are 2 more possibility that string starts with 0 or 1 in that case answer will 
// always be atleast 1 so i took answer as 1 and then check for 1 and 0 occurances
