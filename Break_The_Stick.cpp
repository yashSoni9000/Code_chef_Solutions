#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if(!(n%2)) cout<<"YES"<<e;
	    else{
	        if(!(x%2)) cout<<"NO"<<e;
	        else cout<<"YES"<<e;
	    }
	}
	return 0;
}

// here we can see by observation that if given n is even then regardless of x answer will always be true 
// ex 10 | x can be from 1 to 9
// taking each case therir corresponding number will be of same parity and such as (1,9) ,(2,8) ,(3,7) .... and so on
// but if number is odd then answer depends on x that if x is even then there is no way that we can achieve same parity
// else if both have same parity then we can say that it is possible to achieve