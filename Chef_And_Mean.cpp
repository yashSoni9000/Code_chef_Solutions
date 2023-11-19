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
	    ll a[n]={0},total=0,mean1,mean2,temp1,temp2;
	    bool ans=false;
	    f(n){
	        cin>>a[i];
	        total+=a[i];
	    }
	    if(total%n) cout<<"Impossible"<<e;
	    else{
	        mean1=total/n;
	        f(n){
	            if(mean1==a[i]){
	                temp1=i+1;
    	            ans=true;
	                break;
	            }
	        }
	        if(ans) cout<<temp1<<e;
	        else cout<<"Impossible"<<e;
	    }
	}
	return 0;
}

//we first check if mean is float then it is not possible to steal coin else if the mean exists in the given coin value
// then we print the index of that value else we print impossible