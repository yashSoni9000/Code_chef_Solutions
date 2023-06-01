#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
        if(a*b<0||b*c<0||a*c<0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}

// if product of any 2 numbers are negative then we print yes else no , this is what is asked in the question