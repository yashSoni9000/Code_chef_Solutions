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
	    int x1,y1,x2,y2,sum1,sum2;
	    cin>>x1>>y1>>x2>>y2;
	    sum1=x1+y1;
	    sum2=x2+y2;
	    if(sum1%2==sum2%2) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// this question is of observation that if the current coordinate of knight sum's degree is equal to end coordinates then
// it is possible that we can do a back and forth beteween end point and point just before that point till 100 moves
// else it is not possible in 100 moves