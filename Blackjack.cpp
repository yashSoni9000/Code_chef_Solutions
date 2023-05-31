#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if((21-(a+b))>10) cout<<-1<<e;
	    else cout<<(21-(a+b))<<e;
	}
	return 0;
}

// if the number remaining after 21 subtraction is greater than 10 then we can not take that number as it is not in range of 1 to 10
// so we print -1 else we print the difference