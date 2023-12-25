#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int i=1,ans=0;
	    while(n>=x){
	        if(i%3==0) ans++;
	        n-=x;
	        i++;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// while n > = x we reduce x minutes and if 3 song is played we increment the number and print it