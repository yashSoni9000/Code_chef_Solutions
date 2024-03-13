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
	    if(n%2) cout<<-1<<e;
	    else{
	        for(int i=n;i>=1;i--) cout<<i<<" ";
	    }
	    cout<<e;
	}
	return 0;
}

// This question was of observation that if the given number is even then we print reverse the number till one and if odd 
// we print -1 this is because
// ex n=5
// 1 2 3 4 5
// |---|---|
// --|---|--
// gcd of 1,3,5 is 1 
// and gcd of 2,4 is 2 so even index has greater gcd
// now even if you rotate or permute it
// we get
// 5 4 3 2 1
// still gcd of odd < gcd of even 
// 4 3 2 1 5
// here gcd of odd == gcd of even == 1 which is not greater than even so this also not holds true therefore it is not possible
// and even number it is possible always