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
	    string s,ans="";
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='A') ans+="T";
	        if(s[i]=='T') ans+="A";
	        if(s[i]=='C') ans+="G";
	        if(s[i]=='G') ans+="C";
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we check each character in string and we replace it with its corresponding word given to us