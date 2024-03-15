#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,length;
	cin>>t;
	while(t--)
	{
	    cin>>n>>length;
	    int square=0;
	    for(int i=1;i*i<=n;i++) square=i;
	    cout<<square*length<<e;
	}
	return 0;
}

// the large square can consist of 1,4,9,16.... squares so we can observe that these are perfect squares so we need to
// get the largest perfect sqareroot less than n and multiply it by length to get our large square side length