#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,x;
// 	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x+7>170) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// if the given number is greater than 170 we print yes else no