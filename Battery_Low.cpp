#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<=15) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// if x is less than 15 print yes else print no ,i did this low rating code as i had other imp tasks to do :-(