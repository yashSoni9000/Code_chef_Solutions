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
	    a*=10;
	    b*=5;
	    if(a==b) cout<<"ANY"<<e;
	    else if(a>b) cout<<"FIRST"<<e;
	    else cout<<"SECOND"<<e;
	}
	return 0;
}

// this question involves for basic understanding of % (percentage) calculations 
// suppose we have 1000 rs and we need to find 10% of it so we do it as follows
// 1000*(10/100)=100
// similarly we are given the RHS here and we need to find the actual amount so we can do that as follows
// 100*(100/10)=1000 which is equal to 100*10 that is why i had multiplied with 10 and 5 respectively