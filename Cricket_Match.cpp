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
	    ll ans=6;
	    cin>>n>>m;
	    int a=36*m;
	    if(n<=a)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}

// for every over max runs are 36 so we multiply by total numbers of given to get max possible score in match and
// if that score is less then n then we print no else print yes