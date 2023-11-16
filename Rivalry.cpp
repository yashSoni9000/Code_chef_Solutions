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
	    int r1,r2,d1,d2;
	    cin>>r1>>r2>>d1>>d2;
	    r1+=d1;
	    r2+=d2;
	    if(r2>r1) cout<<"Everule"<<e;
	    else cout<<"Dominater"<<e;
	}
	return 0;
}

// we changed rating d1 and d2 to their initial rating r1 and r2 and then check who has more rating we print accordingly