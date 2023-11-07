#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,p,q,r;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>p>>q>>r;
	    int maxDiff=INT_MIN,temp,total=p+q+r,vote=a+b+c;
	    temp=p-a;
	    if(temp>maxDiff) maxDiff=temp;
	    temp=q-b;
	    if(temp>maxDiff) maxDiff=temp;
	    temp=r-c;
	    if(temp>maxDiff) maxDiff=temp;
	    vote+=maxDiff;
	    if(2*vote>total) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we first need to find the max diff between of total votes and received votes of all the 3 regions and we add that to 
// total votes received and check if we double it then it is greater than total number of votes or not if yes we print yes
// else print no