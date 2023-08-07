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
	    double n;
	    cin>>n>>x;
	    n/=2.0;
	    if(n<=x) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we divide the number of people in parliament by 2 and check if it is less than voted people if yes we print yes else no