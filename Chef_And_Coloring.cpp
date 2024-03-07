#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[3]={0};
	    string s;
	    cin>>s;
	    f(n){
	        if(s[i]=='R') a[0]++;
	        else if(s[i]=='G') a[1]++;
	        else a[2]++;
	    }
	    cout<<n-max({a[0],a[1],a[2]})<<e;
	}
	return 0;
}

// we need to find the max colored painted wall and subtract it from total rooms to get min different color walls and print it
// given color combination info was there in question for confusion