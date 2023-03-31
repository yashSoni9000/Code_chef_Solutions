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
	    if(n%5!=0&&k%5==0) cout<<n/5-k/5+1<<e;
	    else if(n%5==0&&k%5!=0) cout<<n/5-k/5-1<<e;
	    else cout<<n/5-k/5<<e;
	}
	return 0;
}
// i have used help to solve this question , in this question we chekced that if no of candidates are multiple of 5
// and k th candidate is leaving and is not a multiple of 5 then we subtract n/5-k/5-1 , basically	we had to observe things 
// and so we get to conclusion