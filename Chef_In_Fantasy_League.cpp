#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>s;
	    int a[n],b[n],cans=INT_MAX,dans=INT_MAX;
	    f(n) cin>>a[i];
	    f(n) cin>>b[i];
	    f(n){
	        if(b[i]==0) if(cans>a[i]) cans=a[i];
	        if(b[i]==1) if(dans>a[i]) dans=a[i];
	    }
	    if (cans == INT_MAX || dans == INT_MAX || s + cans + dans > 100)
            cout << "no\n";
        else
            cout << "yes\n";
	}
	return 0;
}

// we first need to get the min number with goalkeepers and forwards and then from than min number check if either of
// them has int max in it or the previous s number + the cost of both player is greater then 100 then its not possible
// and we print no else we print yes