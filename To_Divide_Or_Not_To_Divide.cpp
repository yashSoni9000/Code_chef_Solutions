#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,a,b,n;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	    if(!(a%b)) cout<<-1<<e;
	    else{
	        while(true){
	        if(!(n%a)&&(n%b)){
	            cout<<n<<e;
	            break;
	        }
	        else n+=(a-(n%a));
	        }
	    }
	}
	return 0;
}

// if the "a" number is divisible by "b" then no matter what number before or after n, a number will always be divisible by
// 'a' so we return -1 in all such cases else we make a loop and check that if the current n divides a and do not divides
// b then we directly print that number n else we add number a number which will be divisible by a and then it check
// again in the loop and print accordingly