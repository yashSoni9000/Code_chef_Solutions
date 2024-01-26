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
	    int temp,bulk=0,ans=0;
	    cin>>n>>k;
	    f(n){
	        cin>>temp;
	        if(bulk+temp>=k){
	            ans++;
	            bulk=0;
	        }else bulk+=temp;
	    }
	    cout<<ans<<e;
	    
	}
	return 0;
}

// we add inital literacy to a bulk variable which turns 0 if there are more than or equal to k people required, and each time
// bulk goes to 0 we add to our answer and at last print it to get our answer