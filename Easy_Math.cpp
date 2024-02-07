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
	    int a[n],sum=0,maxSum=INT_MIN;
	    f(n) cin>>a[i];
	    f(n-1){
	        for(int j=i+1;j<n;j++){
	            int product=a[i]*a[j];
	            while(product){
	                int last=product%10;
	                sum+=last;
	                product/=10;
	            }
	            if(sum>maxSum) maxSum=sum;
	            sum=0;
	        }
	    }
	    cout<<maxSum<<e;
	}
	return 0;
}

// i used brute force approach and applied what was asked, by checking between every 2 numbers , getting their product and
// sum the digits of product and check if the sum is greater than the max sum in all the loop if yes we assign new max sum
// else we continue and print the max sum