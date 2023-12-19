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
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    f(z){
	        w+=x;
	        w-=y;
	    }
	    cout<<w<<e;
	}
	return 0;
}

// for z months we add x and remove y amount from w current amount to get final balance and print it