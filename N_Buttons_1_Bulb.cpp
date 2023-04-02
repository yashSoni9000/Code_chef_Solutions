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
	    string s1,s2;
	    bool counter=false,ans=true;
	    cin>>n>>s1>>s2;
	    f(n){
	        if(s1[i]!=s2[i]){
	            if(counter){
	                counter=false;
	                ans=true;
	            }
	            else {
	                counter =true;
	                ans=false;
	            }
	        }
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// if used a different approach
// eg
// 3
// 000
// 101
// now according to my code i checked if both strings were different ans counter is false
// in our example 0!=1 so we chekck if counter is true here it is not so we make counter true and
// make our answer false which denoted that bulb is off 
// now again for next i 0==0 so we continue
// now for next i 0!=1 we check if counter is true and in our example its true we make counter false and
// answer true as the light bulb will be on now
// so we print the answer