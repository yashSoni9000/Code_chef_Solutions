#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(!(n%2)) cout<<(n/2)*n<<e;
	    else{
	        ll temp=n-1;
	        ll ans=(temp/2)*temp;
	        cout<<ans+temp<<e;
	    }
	}
	return 0;
}

// i wrote all the patters possible for upto n=0
// here are the results
// 1 | 2 | 3 | 4 | 5  | 6  | 7  | 8  | 9  | 10 |  ==> this is n
// 0 | 2 | 4 | 8 | 18 | 24 | 32 | 40 | 50 | 60 |  ==> this is answer for each n

// i deduced the pattern that if n is even then answer is (n/2)*n else we need to subtract  one from odd num and
// then find that even number answer and add that answer to even number
