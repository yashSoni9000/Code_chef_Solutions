#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cout<<((max(x,y)*2)-1)<<e;
	}
	return 0;
}

// if one has won then the one who has scored most will be doubled and decreased by 1 to get total number of matches