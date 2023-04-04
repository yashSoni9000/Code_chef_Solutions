#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
        if(a%3==0 || b%3==0) cout<<0<<e;
        else if(a%3==b%3) cout<<1<<e;
        else cout<<2<<e;
	}
	return 0;
}

// there can be only 3 cases which are 0,1 and 2 i have tested with random numbers and got this result
// also observed that if number is directly divisible by 3 we get 0 as answer
// else if has same remainder we get 1 as answer
// else answer is 2