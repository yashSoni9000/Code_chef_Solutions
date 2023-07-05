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
        int minus=0,plus=0,temp1;
	    f(n){
	        cin>>temp1;
	        if(temp1==1) plus++;
	        else minus++;
        }
	    if(n%2) cout<<-1<<e;
	    else{
	        if(plus==minus) cout<<0<<e;
	        else if(plus==n ||minus==n) cout<<n/2<<e;
	        else{
	            n/=2;
	            temp1=min(minus,plus);
	            cout<<n-temp1<<e;
	        }
	    }
	}
	return 0;
}

// i first checked if the given number is odd then we can not make it zero 
// in second condition if both count of plus and minus are equal then sum is already 0
// for third if only one of them exists then we need to convert exactly half of the present numbers
// at last we divide n in 2 parts to get how much we need to make equal and then whichever is minimum we will subtract 
// from divided n to get our answer