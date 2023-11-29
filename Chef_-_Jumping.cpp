#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	while(t--)
	{
	    ll a,i=0;
	    cin>>a;
	   if(!(a%3)) cout<<"yes"<<e;
	   else{
	       a--;
	       if(!(a%3)&& !(a%2)) cout<<"yes"<<e;
	       else cout<<"no"<<e;
	   }
	}
	return 0;
}

// on checking we can can see that numbers which is divisible by 3 is then chef can reach there
// else if number just less than a number is divisible by both 2 and 3 then chef can reach as well 
// else he can not reach 