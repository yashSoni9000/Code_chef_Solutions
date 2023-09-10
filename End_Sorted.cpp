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
	    int a[n+1]={0},sumN=0,sumO=0;
	    bool nflag=false,oflag=false;
	    f(n) cin>>a[i];
	    f(n){
	        if(a[i]==n){
	            if(!oflag) nflag=true;;
                sumN=n-i;
	        }
	        if(a[i]==1){
	            if(nflag) sumO=i-2;
	            else{
	                sumO=i-1;
	                oflag=true;
	            }
	        }
	    }
	   cout<<sumN+sumO<<e;
	}
	return 0;
}

// I checked that if '1' comes before the number 'n' then we can directly print number of steps required for them to 
// get to their original position but if '1' comes after 'n' then we need to reduce one more step from our answer 
// as there will be a swap performed where the '1' will be shifted toward the initial position which will reduce the 
// total steps by 1