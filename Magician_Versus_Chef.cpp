#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,s,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>s;
	    int ans=x;
	    f(s){
	        cin>>a>>b;
	        if(a==ans) ans=b;
	        else if(b==ans) ans=a;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we take the input and check if either of the numbers have coins in it , if yes then we give coin to other match
// we keep doing it till we get to the final match and we print the match