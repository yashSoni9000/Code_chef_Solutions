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
	    if(n==1) cout<<"no"<<e;
	    else{
	    bool ans=true;
	    for(int i=2;i<=sqrt(n);i++) if(!(n%i)) ans=false;
	    if(ans) cout<<"yes"<<e;
	    else cout<<"no"<<e;
	    }
	}
	return 0;
}

// we simply need to write the program to find out prime numbers , if we found yes we print yes else print no