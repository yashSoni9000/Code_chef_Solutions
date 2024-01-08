#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<n<<e;
	}
	return 0;
}

// in the given formual n%m<=n/2 , it will always be true for every m so we do not need to perform this operation and check
// for results we can simply print the result.
// ex 5
// 5%1<=2 == 0<=2
// 5%2<=2 == 1<=2
// 5%3<=2 == 2<=2
// 5%4<=2 == 1<=2
// 5%5<=2 == 0<=2
// hence for every value of m it satisfies the given condition