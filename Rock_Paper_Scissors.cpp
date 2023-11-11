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
	    int chef=0,chefina=0,draw=0,ans=0;
	    string a,b;
	    cin>>n;
	    cin>>a>>b;
	    f(n){
	        if(a[i]==b[i]) draw++;
	        else{
	            if(a[i]=='R'){
	                if(b[i]=='S') chef++;
	                else chefina++;
	            }
	            else if(a[i]=='S'){
	                if(b[i]=='P') chef++;
	                else chefina++;
	            }
	            else{
	                if(b[i]=='R') chef++;
	                else chefina++;
	            }
	        }
	    }
	   if(chef>chefina) cout<<0<<e;
	   else if(chef==chefina || draw==n) cout<<1<<e;
	   else{
	       while(chef<=chefina){
	           chef++;
	           chefina--;
	           ans++;
	       }
	       cout<<ans<<e;
	   }
	}
	return 0;
}

// we first get the score of chef, chefina and number of draws and then we check if chef has more points them chefina 
// then chef wins already else if they both have equal points or all the games were draw then chef need only one
// point to win game else we check while chef has less points then chefina we increase points of chef and decrease
// chefina point and add min points to our answer and print the answer