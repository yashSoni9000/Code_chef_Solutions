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
	    int a[n],thousandCount=0,hundredCount=0;
	    bool flag=false;
	    f(n) cin>>a[i];
	    f(n){
	        if(a[i]==0){
	            flag=true;
	            thousandCount++;
	        }
	        if(flag){
	            hundredCount++;
	        }
	    }
	    thousandCount*=1000;
	    hundredCount*=100;
	    cout<<thousandCount+hundredCount<<e;
	}
	return 0;
}

// if chef has paid rent from starting without any break then he do not need to pay fine but if the misses even once
// the rent after them will have fine for rest of the chef time .
// ex
// 1 0 1 0
// here chef has paid fess for 1 month so there will be no fine
// but he missed for second month so his fine will start piling up
// and since he paid second month rent in third month he will have to pay for 2,3 and 4 month late fees
// so total is 2300