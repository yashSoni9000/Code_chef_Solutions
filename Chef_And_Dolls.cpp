#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int ans=0;
	   // int a[100001]={0};
	   // f(n){
	   //     cin>>temp;
	   //     a[temp]++;
	   // }
	   // f(100001) if((a[i]%2)) cout<<i<<e;
	   f(n){
	       cin>>temp;
	       ans^=temp;
	   }
	   cout<<ans<<e;
	}
	return 0;
}

// the commented code is my method and the ^ operator method is seen method
// in ^ operator it happens like this (((a^b)^c)^d) so if same number repeates it gets cancelled out and we get the remaining
// thing as our answer