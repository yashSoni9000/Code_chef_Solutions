#define ll long long
#define f(end) for(int i=0;i<end;i++)
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
	    x+=y;
	    if(x%2) cout<<"JAY"<<e;
	    else cout<<"JANMANSH"<<e;
	}
	return 0;
}

// it dosent matter if we increase of decrease by 1 the end answer will be the final after fixed number of moves
// eg x=4 and y=3 this means
// if we increment every time we get 4+1+1+1=5 so jay wins
// if we decrement every time we get 4-1-1-1=1 so now also jay wins
// so it dosent matter if we add or sub we will get same result and depending on that we will print the answer 