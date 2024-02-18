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
	    for(int i=n/2;i>0;i--) cout<<i<<" ";
	    for(int i=n/2+1;i<=n;i++) cout<<i<<" ";
	    cout<<e;
	}
	return 0;
}

// if we observe we can see that if we print first half in revers and second half as it is from number 1 to n we will get 
// unique sum of mirror numbers
// ex
// 6
// 1 2 3 4 5 6
// reversing
// 3 2 1 4 5 6
// 3+6=9
// 2+5=7
// 1+4=5 
// so we can say that sum of given condition are all distinct hence we print in such manner