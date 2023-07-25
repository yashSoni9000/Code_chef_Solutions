#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if((x%3)==1) cout<<2<<e;
	    else if((x%3)==2) cout<<1<<e;
	    else cout<<0<<e;
	}
	return 0;
}

// we check if the marks obtained by chef is divisible by 3 then there can be no negative marks else there are some negative
// which will always lie in 1 or 2 questions as we get +3 for every answer , after noticing the pattern we can see that
// if the remainder is 1 when dividing by 3 there are min 2 incorrect answers and if 2 remainder then one question is incorrect