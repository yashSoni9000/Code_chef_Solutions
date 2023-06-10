#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n<=m) cout<<n<<e;
	    else cout<<(n*2)-m<<e;
	}
	return 0;
}

// if the number of required shoes 'n' are less than remaining shoes 'm' we will simple print the required shoes 
// else we will print double of required shoes - remaining shoes