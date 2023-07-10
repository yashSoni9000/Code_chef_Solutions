#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,a,b;
// 	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if(a==0 ) cout<<"https://www.codechef.com/practice"<<e;
	    else if(b==0) cout<<"https://www.codechef.com/contests"<<e;
	    else if(a==1 &&b==1) cout<<"https://discuss.codechef.com"<<e;
	}
	return 0;
}

// we print the links according to the question given to us 