#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double t,p,l;
	cin>>t;
	while(t--)
	{
	    cin>>p>>l;
	    double ans=double(l/p);
	    if((ans*100)>=75) cout<<"Yes"<<e;
	    else cout<<"No"<<e;
	}
	return 0;
}

// we first find l/p and multiply by 100 and check if it is greater than or equal to 75 we print yes else print no