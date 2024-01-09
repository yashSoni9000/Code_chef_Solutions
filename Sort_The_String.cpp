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
	    int ans=0;
	    cin>>s;
	    f(n-1){
	        if(s[i]=='1' && s[i+1]=='0') ans++;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we need to check '10' which means that we need to swap in reverse it 
// say if '01' occurs then we do not need to reverse it so it works fine but other way around work oppositely