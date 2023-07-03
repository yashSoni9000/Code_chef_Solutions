#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>x>>a>>b;
	    if(a+(b*2)>=x) cout<<"Qualify"<<e;
	    else cout<<"NotQualify"<<e;
	}
	return 0;
}

// chef need atlest x points to win  so total score from a and b question with their points must be a*1+b*2 >= x 
// we print qualify else print notqualify