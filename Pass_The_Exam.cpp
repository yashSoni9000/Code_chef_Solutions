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
	    if(a>=10 && b>=10 && c>=10 && (a+b+c)>=100) cout<<"PASS"<<e;
	    else cout<<"FAIL"<<e;
	}
	return 0;
}

// we need to check if all the four conditions met we print pass else print fail