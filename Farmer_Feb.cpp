#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int sum=x+y,ans;
	    for(int i=sum+1;i<3000;i++){
	        bool isPrime=true;
	        for(int j=2;j*j<=i;j++){
	            if(i%j==0) isPrime=false;
	        }
	        if(isPrime){
	            ans=i-sum;
	            break;
	        }
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// in this question we need to find the immediate next prime number after the sum of given 2 number and print it
// i assumed that sum can not exceed 2000 therefore i took 3000 as max limit and chec after sum if prime subtract from sum
// and print it