#define ll long long
#define f(end) for(int i=1;i<=end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,c,r;
	cin>>t;
	while(t--)
	{
	    int ans1=0,ans2=0;
	    cin>>c>>r;
	   // f(9) if(!(c%i)) ans1=(c/i);
	   // f(9) if(!(r%i)) ans2=(r/i);
	   // cout<<ans1<<" "<<ans2<<e;
	   ans1=c/9;
	   ans2=r/9;
	   if(c%9) ans1++;
	   if(r%9) ans2++;
	    if(ans1<ans2) cout<<0<<" "<<ans1<<e;
	    else cout<<1<<" "<<ans2<<e;
	}
	return 0;
}

// we take the last number 9 which is largest 1 digit number and we check if final power is divisible by 9 then it will
// do not have any integer added to it else we add one more integer to our answer and then compare the digits and whosoever
// has less digits we print number accodingly