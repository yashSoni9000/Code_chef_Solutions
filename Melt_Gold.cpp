#define ll long long
#define f(end) for(int i=1;i<=end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int ans,i=1;
	    while(y<x){
	        y+=i;
	        ans=i;
	        i++;
	    } 
	    cout<<ans<<e;
	}
	return 0;
}

// lets take an example to understand it
// 10 5
// while(5<10)
// we increment it by 1 ie i;
// now we give ans=i in case if i is our answer
// and increment i by 1 so i=2
// now again 6<10
// we increment it by i which is 2 our y now is 8
// ans=i ans now answer is 2 and increment i 1
// now 8<10 
// we increment it by i which is 3 our y now is 11
// ans=i ans now answer is 3 and increment i 1
// now 11!<10 
// we  print the ans