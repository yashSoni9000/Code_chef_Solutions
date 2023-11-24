#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    double mean=(a+b)/2;
	    if(mean>c) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we take the mean and store it in doubel so that we get decimal value too so that we can compare it strictly