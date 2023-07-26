#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    if(x==a||x==b||x==c) cout<<"Yes"<<e;
	    else cout<<"No"<<e;
	}
	return 0;
}

//we check if the x is among the given 3 topics i.e. a or b or c we print yes else print no