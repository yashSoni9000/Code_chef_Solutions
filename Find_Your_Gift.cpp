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
	    bool xAxis=false,yAxis=false;
	    int x=0,y=0;
	    cin>>s;
	    f(n){
	       if(!xAxis && (s[i]=='L'||s[i]=='R')){
	           xAxis=true;
	           yAxis=false;
	           if(s[i]=='L') x--;
	           else if(s[i]=='R') x++;
	       }
	       if(!yAxis && (s[i]=='U'||s[i]=='D')){
	           yAxis=true;
	           xAxis=false;
	           if(s[i]=='D') y--;
	           else if(s[i]=='U') y++;
	       }
	    }
	    cout<<x<<" "<<y<<e;
	}
	return 0;
}

// in this question we need flags to set that x axis is now covered and we want to increment or derement in y axis and visa versa
// and according to initial character we increase or decrease x or y.