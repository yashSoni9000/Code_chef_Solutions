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
	    int a[n+1]={0},temp,odd=0,even=0;
	    bool ans=false;
	    for(int i=1;i<=n;i++) 
	    {
	        cin>>temp;
	        if(temp) odd++;
	        else even++;
	    }
	    if(n%2){
	        if((odd%2)&&!(even%2)) ans=true;
	    }
	    else{
	        if(!(odd%2)&&!(even%2)) ans=true;
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we check the count of number of 1 and 0 in odd and even respectively then check the freq of these numbers, in case of
// length of array n be odd then only when even number of 0 are present we can make such array else we can not make
// in case if n is even then both of the numnbers should be even else it is not possible for even numbers to exists