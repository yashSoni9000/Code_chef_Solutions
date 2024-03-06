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
	    cin>>n>>k;
	    ll temp,sum=0,nextNum;
	    f(n){
	        cin>>temp;
	        sum+=temp;
	    }
	    f(k){
	        nextNum=sum+1;
	        sum+=nextNum;
	    }
	    if(nextNum%2) cout<<"odd"<<e;
	    else cout<<"even"<<e;
	}
	return 0;
}

// we need to take the given array sum and add 1 to sum to get next greater number and then k times add it to sum 
// while also incrementing 1 to it to keep the given condition intact and at last we check if the number last added
// is even or odd and print accordingly