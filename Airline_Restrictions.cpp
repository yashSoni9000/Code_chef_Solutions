#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d,f;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    f(3) cin>>a[i];
	    cin>>d>>f;
	    if((a[0]<=f && (a[1]+a[2])<=d)||(a[1]<=f && (a[0]+a[2])<=d)||(a[2]<=f && (a[0]+a[1])<=d)) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// there are only 3 case when chef will be allowed to take her bags in plan i.e. the first one in hand and rest
// 2 in checkin similarly we check for other 2 bags and print answer accordingly