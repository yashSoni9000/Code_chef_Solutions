#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	double t1,t2,r1,r2;
	cin>>t;
	while(t--)
	{
	    cin>>t1>>t2>>r1>>r2;
	    t1*=t1;
	    t2*=t2;
	    r1=r1*r1*r1;
	    r2=r2*r2*r2;
	    t1/=r1;
	    t2/=r2;
	    if(t1==t2) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to first find the square of both the time given t1 and t2 and semi major axis cube r1 and r2 ,according to question
// then we divide both the square and cube of time and semi major axis respectively and check if they are equal if yes then we print
// yes else no , the divide part is according to question and is given there