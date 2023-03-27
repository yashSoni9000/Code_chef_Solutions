#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(n%k==0) cout<<n/k<<e;
	    else cout<<-1<<e;
	}
	return 0;
}


// we need to check if the given number  is divisible by k then we can eat the candy whole
// else print -1
// eg
// 2
// 6 3
// 7 4
// in first case 6 is divisible by 3 so we can print 6/3=2 as out answer
// in second case 7 is not divisible by 4 and there will be some remainder chocolates so we print -1