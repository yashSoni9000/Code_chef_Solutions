#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,s,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>s;
	    int sum=0,temp=0,ans=0,demo=1;
	    for(int i=0;i<n;i++){
	        sum+=demo;
	        demo+=2;
	    }
	    temp=abs(sum-s);
	    demo=1;
	    for(int i=0;i<n;i++){
	        if(temp==((k-1)*demo)) ans=demo;
	        demo+=2;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we need to first count the sum of first n odd positive numbers then we subtract it from the given number s to 
// see the difference remaining and then for each odd numbers till n we check if (k-1)*each odd numner
// (k-1 is used as one of the  k is already counted while counting the sum of n odd numbers) is equal to the difference
// then we give that odd number to our answer and print it.
// e.g.
// we are given : n=5 ,k=3 ,s=39
// so sum of n odd numbers is 1+3+5+7+9=25
// diff= 39-25=14
// k==3 so k-1=2 now,
// 2*9==18 != 14 
// 2*7==14 == 14 so our answer is 7

