#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    cout<<k/n<<e;
	}
	return 0;
}

// eg
// 6 23
// now we need to distribute the weapons to kids like this
// 1  2  3  4  5  6  --> denotes kids

// 1  2  3  4  5  6  --> denotes weapons
// 7  8  9  10 11 12 --> denotes weapons
// 13 14 15 16 17 18 --> denotes weapons
// 19 20 21 22 23    --> denotes weapons

// this is how weapons will be allotted and we need to find the min now of weapons a kid has
// on our case the 6th kid has only 3 weapons rest all have 4
// so now to get 3 we can simply divide k by n to get our answer in our case it is 3