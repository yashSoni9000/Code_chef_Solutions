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
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        s[0]='1';
	        k--;
	    } 
	    f(k) s+='0';
	    cout<<s<<e;
	}
	return 0;
}

// the string can be max if s[0]=1 and if there is more k operations remaining 0 are appended at last to make the string
// maximum in decimal numbers