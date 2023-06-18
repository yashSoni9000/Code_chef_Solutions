#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    cout<<max(abs(c-a),abs(d-b))<<e;
	}
	return 0;
}

// according to question we need to find the max distance between given points and there are no negative numbers
// so we use abs() to get positive numbers and take max of the difference of given coordinates