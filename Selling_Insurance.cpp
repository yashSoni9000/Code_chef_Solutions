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
	    double ans=x*0.2;
	    ans=100/ans;
	    cout<<ceil(ans)<<e;
	}
	return 0;
}

// we multiply by 0.2 to get chef profit and then divide that profit by 100 to get the total number of insurance to get a
// 100 dollar profit