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
	    if(n%2) cout<<n-1<<e;
	    else cout<<n<<e;
	}
	return 0;
}

// in the question itself it is said that a double string is of even length so if the length is even we can say that we can
// make a double string from the given palindrome else we need to reduce a character from palindrome string and print the
// length of new double string