#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,a,b;
	cin>>t;
	while(t--)
	{
	    int count=2;
	    cin>>x>>y>>a>>b;
	    if(x==a || x==b) count--;
	    if(y==a || y==b) count--;
	    cout<<count<<e;
	}
	return 0;
}

// we can be sure that chef can win at most 2 gold medals so if chef rival is participating in any of the races that chef is
// participating then his medals are decreased so do the same that if x i.e. chef race  if rival is participating we decrease
// the count, similarly we do the same with second race as well the print the count of race chef can win