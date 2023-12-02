#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    int w,h;
	    cin>>w>>h;
	    if(60<=w && 130>=h) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// simply check if 60 is less than weight and 130 is greater than height we print yes else print no