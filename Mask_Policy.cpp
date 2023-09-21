#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a;
	    int temp=n-a;
	    cout<<min(temp,a)<<e;
	}
	return 0;
}

//we take the number of infected and not infected people and need to print whosoever is min in number.