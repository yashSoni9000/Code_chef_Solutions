#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    string s;
	    int ans=0;
	    cin>>s;
	    f(n){
	        if(s[i]=='0') ans+=a;
	        else ans+=b;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we need to check if in the given string the number is 0 we add 'a' to our answer else add b and print the answer at last