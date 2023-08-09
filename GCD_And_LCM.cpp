#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,a,b;
	cin>>t;
	while(t--)
	{
	     int a,b;
	    cin>>a>>b;
	    int HCF=1;
	    int temp = min(a,b);
	    for(int i=1;i<=temp;i++){
	        if(a%i==0 && b%i==0 ){
	            HCF=i;
	        }
	    }
	    long int lcm=(long int)a/(long int)HCF*b;
	    cout<<HCF<<" "<<lcm<<endl;
	}
	return 0;
}

// we start with 1 and go till the min number of given numbers
// and check if that number is divisible by both a and b if yes we give GCD to that number else we increment it
// for lcm there is a formula that is a/gcd * b  to get lcm
// not that we need to do expicit typecasting to be safe from TLE