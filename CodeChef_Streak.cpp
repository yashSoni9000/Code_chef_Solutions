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
	    ll om=0,addy=0,temp,maxOm=0,maxAddy=0;
	    cin>>n;
	    f(n){
	        cin>>temp;
	        if(temp<1){
	            if(om>maxOm) maxOm=om;
	            om=0;
	        }
	        else om++;
	    }
	    f(n){
	        cin>>temp;
	        if(temp<1){
	            if(addy>maxAddy) maxAddy=addy;
	            addy=0;
	        } 
	        else addy++;
	    }
	    if(om>maxOm) maxOm=om;
	    if(addy>maxAddy) maxAddy=addy;
	   // cout<<maxOm<<" "<<maxAddy<<e;
	    if(maxAddy>maxOm) cout<<"Addy"<<e;
	    else if(maxAddy<maxOm) cout<<"Om"<<e;
	    else if(maxAddy==maxOm) cout<<"Draw"<<e;
	}
	return 0;
}

// I took the input for om and addy and checked it they have solves less than 1 question i.e. 0 questions then their breaks
// but we need to store the highest streak achived by respective person so that we can compare later on 
// in case of both have equal code streak then we need to assign the streak to max streak of respctive person as it is 
// required in the question.  we then print according to the max streak achieved by either of the person