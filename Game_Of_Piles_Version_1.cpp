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
	   ll odd=0,even=0,temp;
	   bool master=false;
	   f(n){
	       cin>>temp;
	       if(temp==1) master= true;
	       if(temp%2) odd++;
	       else even++;
	   }
	   if(master) cout<<"CHEF"<<e;
	   else{
	       if(odd%2) cout<<"CHEF"<<e;
	       else cout<<"CHEFINA"<<e;
	   }
	}
	return 0;
}

// we need to check if there exist only one stone in piles then we print chef as chef will always win else we check the count
// of odd and even numbers if count of odd numbers are odd then chef will win else chefina will win.
// This question was of observation and needs to be checked on mulitple cases then only we are able to get this conclusion