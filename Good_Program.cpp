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
	    if(n%4) cout<<"Not Good"<<e;
	    else cout<<"Good"<<e;
	}
	return 0;
}

// if the number is divisible by 4 then its good else not good , as per the given test cases explained