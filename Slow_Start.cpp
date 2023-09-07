#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,h;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>x>>h;
	    int i=0;
	    while(h>0 && i<5){
	        h-=(x/2);
	        count++;
	        i++;
	    }
	    while(h>0){
	        h-=x;
	        count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// for first 5 turn we reduce by x/2 from health and if there is still remaining health then we reduce x till the
// health is less than 0 can we print the count we did till now 