#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,f,p;
	    cin>>a>>b>>c>>d>>f>>p;
	    a*=p;
	    b*=p;
	    c*=p;
	    d*=p;
	    f*=p;
	   // cout<<a<<" "<<b"<<
	    a+=b+c+d+f;
	    if(a<=120) cout<<"No"<<e;
	    else cout<<"Yes"<<e;
	}
	return 0;
}

// we multiply each of the chef office working day by p then we add all the working hours from home 
// then if it is less than 120 (24*5) then chef can enjoy weekend else he have to work on weekends