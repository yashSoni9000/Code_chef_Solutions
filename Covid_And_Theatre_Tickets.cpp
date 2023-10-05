#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	   // if(n>2) n=ceil(n/2);
	   // else n=0;
	   // if(m>2) m=ceil(m/2);
	   // else m=0;
	   // cout<<n<<" "<<m<<e;
	   //if(n+m==0) cout<<1<<e;
	   // else cout<<n+m<<e;
	   
	   // Another Approach
	   n=ceil(n/2);
	   m=ceil(m/2);
	   cout<<n*m<<e;
	}
	return 0;
}

// we calculate the number of row and column that will be occupied with people by ceil function and multiply them 
// to get the total number of seats which can be occupied by users according to government norms