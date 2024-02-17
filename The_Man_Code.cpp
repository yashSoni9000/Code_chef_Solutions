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
	    double n;
	    cin>>n;
	    int maxi=ceil(n/2);
	    int mini=ceil(n/3);
	    cout<<maxi<<" "<<mini<<e;
	}
	return 0;
}

// the max number can be alternate but for min numbers we can skip 2 at one time so we can get n/3 as min numbers and print them