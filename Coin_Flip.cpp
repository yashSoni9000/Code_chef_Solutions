#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,g,n,i,q;
	cin>>t;
	while(t--)
	{
	    cin>>g;
	    for(int j=0;j<g;j++){
	        cin>>i>>n>>q;
	        if(q==1){
	            if(n%2){
	                if(i == 1) cout<<n/2<<e;
	                else cout<<n/2+1<<e;
	            }else{
	                cout<<n/2<<e;
	            }
	        }else if(q==2){
	            if(n%2){
	                if(i == 1) cout<<n/2+1<<e;
	                else cout<<n/2<<e;
	            }else{
	                cout<<n/2<<e;
	            }
	        }
	    }
	}
	return 0;
}

// according to the given constrains we can observe that at the end of n rounds coins head will be alternate i.e. HTHTHT...
// therefore we check if q=1 then we need to get head count and we check that if number of n is even if so we print half else
// we again check if i=1 then we are given that all are head up initially and print half of that odd number else we add 1 to it
// similarly we do it with q=2 and print the answer g times