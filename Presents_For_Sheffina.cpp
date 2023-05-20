#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<(n%5)+(n/5)*4<<e;
	}
	return 0;
}

// this question was of pure observation and we need to find a pattern which give us  the desired output , it was hard for me
// so i looked for answer