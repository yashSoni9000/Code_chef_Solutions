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
	    if(n>=1 && n<=10) cout<<"Lower Double"<<e;
	    else if(n>10 && n<=15) cout<<"Lower Single"<<e;
	    else if(n>15 && n<=25) cout<<"Upper Double"<<e;
	    else cout<<"Upper Single"<<e;
	}
	return 0;
}

// we print according to our given input if that input is between 1 and 10 we print lower double
// when input is between 10 and 15 we print lower single and so on to get our answer