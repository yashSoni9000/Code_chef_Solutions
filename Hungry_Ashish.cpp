#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(y<=x) cout<<"PIZZA"<<e;
	    else if(z<=x) cout<<"BURGER"<<e;
	    else cout<<"NOTHING"<<e;
	}
	return 0;
}

// ashish first preference is pizza so if the price of pizza is less then the amount he has then he will buy pizza
// else he have to move to burger , if burger's cost is less than x then he can eat burger else he can not eat anything