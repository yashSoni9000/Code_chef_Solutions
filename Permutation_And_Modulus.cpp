/#define ll long long
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
	    int n;
	    cin>>n;
	    for(int i=2;i<=n;i++){
	        cout<<i<<" ";
	    }
	    cout<<1<<e;
	}
	return 0;
}

// since the number should be different from i number and also the modulus set must have minimum distinct numbers
// ex
// 1 2 3 4 ==> i
// 2 3 4 1 ==> permutation array
// 2%1 3%2 4%3 1%4
// 0 1 1 0 so there will always be min 2 distinct elements