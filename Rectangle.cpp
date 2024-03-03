#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if(((a==b)&&(c==d))||((b==c)&&(d==a))||((c==a)&&(b==d))) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to check if pair of any 2 side have equal length the it will be a triangle else it will not be a triangle