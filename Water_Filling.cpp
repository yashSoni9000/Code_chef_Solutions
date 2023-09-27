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
	    int a,b,c;
	    cin>>a>>b>>c;
	    a+=b+c;
	    if(a>=2) cout<<"Not now"<<e;
	    else cout<<"Water filling time"<<e;
	}
	return 0;
}

// if there are 2 times or more times 1 is present then we need to print not now else we can print water filling time