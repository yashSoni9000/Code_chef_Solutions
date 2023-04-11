#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,b;
	cin>>t;
	while(t--)
	{
	    cin>>b;
	    b-=2; // used this to prevent overflow of 2x2 boxes from both the ends of triangle
	    b/=2; // divided by 2 only because box size is 2 if it was 3 we would have dividing by 3 , point of diving by 2 is it gives
        // us the number of levels in the triangle so we can apply the sum of n number
	    cout<<((b*(b+1))/2)<<e;
        // by observation we can see that after each level the sum of squares are decreased by 1 as we move up in the triangle
        // hence we used this formula   
	}
	return 0;
}