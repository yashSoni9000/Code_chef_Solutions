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
	    int a[n],ans=0,count=0;
	    f(n) cin>>a[i];
	    f(n){
	        int sum=0,mul=1;
	        for(int j=i;j<n;j++){
	            sum+=a[j];
	            mul*=a[j];
	            if(sum==mul) ans++;
	        }
	    }
	    cout<<ans<<e;
    }
	return 0;
}

// i checked that if in inner loop the the sum and mul are equal then we increase the count of answer 
// after the inner loop ends we again initialize the sum and mul and repeat the process and print the value of ans