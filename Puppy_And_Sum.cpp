#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d,n;
	cin>>t;
	while(t--)
	{
	    cin>>d>>n;
	    while(d--) n=((n*(n+1))/2);
	    cout<<n<<e;
	}
	return 0;
}

// lets take example to get it
// eg 
// 3 3
// we need to find the sum of numbers d times so we take the sum and store it in n again for further sum calculation
// while(3--)
// n=3*4/2=6
// n=6*7/2=21
// n=21*22/2=231
// so is our answer