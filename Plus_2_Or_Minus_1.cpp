#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,y;
	cin>>t;
	while(t--)
	{
	    cin>>y;
	    if(y==0) cout<<1<<e;
	    else cout<<y*3<<e;
	}
	return 0;
}

// let me show you what are possible combinations 

// x=3

// initializing x=0
//             /   \
//          x=2    x=-1
//         /  \      \
//      x=4   x=1     x=-2
//      /  \           \
//     x=6   x=3       x=-3

// similarly if you check for others we can see that except y=0 all will have distinct elements of 3*y that is why we printed
// y*3 and if y=0 we print 1