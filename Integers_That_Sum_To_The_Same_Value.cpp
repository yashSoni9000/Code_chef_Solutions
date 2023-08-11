#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,n;
// 	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<n-1<<e;
	}
	return 0;
}

// suppose n=4 , possible paries are (1,3),(3,1),(2,2) so no. of pairs are equal to n-1 i.e. 4-1=3 
// similarly we can confirm with rest of numbers 